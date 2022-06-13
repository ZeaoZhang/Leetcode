#!/bin/bash

read -p "Please input the container id you want to control: " id
while :
do
echo -e "Please select an action: \n \
	0 Show all source files\n \
	1 Compile all source files\n \
	2 Show all executable files\n \
	3 test all executable files\n \
	4 exit\n \
	5 clean all executable files\n\
	6 download all executable files"

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
		sudo docker exec -it $id /bin/bash -c 'exit'
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
	*) 
		echo "ValueError, please input again"
		;;
esac
done
