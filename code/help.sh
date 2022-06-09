#!/bin/bash

while :
do
echo -e "Please select an action\n 0 Show all source files\n 1 Compile all source files\n 2 Show all executable files\n 3 test all executable files\n 4 exit\n 5 save executable file"
read -p "please input number: " number
case $number in
	0)
		echo `ls | grep .*[cpp]$`
		;;
	1) 
		echo `make all`
		;;
	2)
		echo `ls | grep /d.*[^cpp]$`
		;;
	3) 
		echo `make test`
		;;
	4)
		exit
		;;
	5)
		read -p "Please input docker id: " id
		read -p "Please input file name you want to dowmload" name
		read -p "please input addresss you want to save: " address
		echo `docker cp $id:/leetcode/code/$name $saveaddress`
		;;
	*) 
		echo "ValueError, please input again"
		;;
esac
done