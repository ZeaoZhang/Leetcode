#!/bin/bash

if [[ -n $(sudo docker ps -qf "name=leetcode") ]]
then 
	:
elif [[ -n $(sudo docker ps -qaf "name=leetcode") ]]
then
	sudo docker start leetcode
else
	sudo docker image rm -f leetcode:v1
	sudo docker build -t leetcode:v1 .
	sudo docker run -dit -p 8080:8080 --name leetcode leetcode:v1
fi
id=$(sudo docker ps -aqf "name=leetcode")

while :
do
echo -e "Please select an action: \n \
	0 Show all source files\n \
	1 Compile all source files\n \
	2 Show all executable files\n \
	3 test all executable files\n \
	4 exit help\n \
	5 clean all executable files\n\
	6 download all executable files\n\
	7 stop the container\n\
	8 end and delete the container"

read -p "please input number: " number
case $number in
	0)
		sudo docker exec -it $id /bin/bash -c 'ls | grep .*[cpp]$'
		;;
	1) 
		sudo docker exec -it $id /bin/bash -c 'make all'
		;;
	2)
		sudo docker exec -it $id /bin/bash -c 'ls | grep .*-test$'
		;;
	3) 
		sudo docker exec -it $id /bin/bash -c 'make test'
		;;
	4)
		exit
		;;
	5)
		sudo docker exec -it $id /bin/bash -c 'make clean'
		;;
	6)
		mkdir ./download
		for file in $(sudo docker exec -it $id /bin/bash -c 'ls | grep .*-test$')
		do
		s=`echo $file | sed s/[[:space:]]//g`
		sudo docker cp $id:/leetcode/code/$s ./download/
		done
		;;
	7)
		sudo docker container stop $id
		exit
		;;
	8)
		sudo docker container rm -f $id
		exit
		;;
	*) 
		echo "ValueError, please input again"
		;;
esac
done
