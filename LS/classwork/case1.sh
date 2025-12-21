#! /bin/bash
read -p "enter a number:" num
#case statement
case ${num} in
	1) 
	echo "you enterd 1"
	;;
2)
echo "you enterd 2"
;;
*) 
	echo "you did not entered 1 or 2"
	;;
esac
