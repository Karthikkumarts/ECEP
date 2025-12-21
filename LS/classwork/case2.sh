#! /bin/bash
read -p  "enter a string:" st
#case statement
case ${str} in
	("hello") 
	echo "you enterd hello"
	;;
("hi")
echo "you enterd hi"
;;
*) 
	echo "please enter a valid string"
	;;
esac
