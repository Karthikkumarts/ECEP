#! /bin/bash
echo "top 2 lines"
echo "bottom 2 lines"
read -p  "enter a number:" num
case $num in
	1) head -2 emp.txt
		;;
	2) tail -2 emp.txt
		;;
	*) echo "please enter valid number --> 1 or 2"
		;;

esac
