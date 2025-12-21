#! /bin/bash
#program to check whether the entered number is between 30 and 40
read -p "enter a number:" number
if [ $number -gt 30 -a $number -lt 40 ]
then 
	echo "yes its between 30 & 40"
else 
	echo "no its not between 30 & 40"
fi


