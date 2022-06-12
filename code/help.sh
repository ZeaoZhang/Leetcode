#!/bin/bash

while :
do
echo -e "Please select an action: \n \
	0 Show all source files\n \
	1 Compile all source files\n \
	2 Show all executable files\n \
	3 test all executable files\n \
	4 exit\n \
	5 clean all executable files"

read -p "please input number: " number
case $number in
	0)
		ls | grep .*[cpp]$
		;;
	1) 
		make all
		;;
	2)
		ls | grep ^[0/-9].*[^cpp]$
		;;
	3) 
		make test
		;;
	4)
		exit
		;;
	5)
		make clean
		;;
	*) 
		echo "ValueError, please input again"
		;;
esac
done
