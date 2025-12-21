#! /bin/bash
#program to show the student have scored average excellent or got failed in subject
read -p "enter 3 numbers:" a b c
total=$(($a+$b+$c))
if [ $total -le 50 ]
then
	echo " student is failed"
elif [ $total -gt 50 -a $total -le 100 ]
then
	echo "student achieved average marks"
else 
	echo "student got exceelent marks"
fi


