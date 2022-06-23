#!/bin/bash

read -p "please input the name of the container:" containername

#若此容器已存在但是还没有开始
if [[ -z $(sudo docker ps -qf "name=$containername") ]] && [[ -n $(sudo docker ps -qaf "name=$containername") ]] 
then 
	sudo docker start $containername
#若此容器不存在
elif [[ -z $(sudo docker ps -qaf "name=$containername") ]]
then
	read -p "please input the name of the image: " imagename
	read -p "please input the edition of the image: " edition
	#若此镜像不存在，则先创建镜像
	if [[ -z $(sudo docker images -q $imagename:$edition) ]]
	then
		sudo docker build -t $imagename:$edition .
	fi
	sudo docker run -dit --name $containername $imagename:$edition
fi
#得到容器id
id=$(sudo docker ps -aqf "name=$containername")

while :
do
echo -e "Please select an action: \n \
	0 Show all source files\n \
	1 Compile all source files\n \
	2 Show all executable files\n \
	3 Test all executable files\n \
	4 Clean all executable files\n\
	5 Download all executable files\n\
	6 Stop the container\n\
	7 End and delete the container"

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
		sudo docker exec -it $id /bin/bash -c 'make clean'
		echo "Finish"
		;;
	5)
		#若文件夹不存在则创建
		if [ ! -d "./download" ]
		then
			mkdir ./download
		fi
		for file in $(sudo docker exec -it $id /bin/bash -c 'ls | grep .*-test$')
		do
		#去除file首尾空格得到文件名
		s=`echo $file | sed s/[[:space:]]//g`
		#下载文件
		sudo docker cp $id:/leetcode/code/$s ./download/
		done
		echo "Finish"
		;;
	6)
		sudo docker container stop $id
		exit
		;;
	7)
		sudo docker container rm -f $id
		exit
		;;
	*) 
		echo "ValueError, please input again"
		;;
esac
done
