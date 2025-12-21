#! /bin/bash
#program to show the number is multiplied by 5
read -p "enter a numbers:" number
if [ `expr $number % 5` -eq 0 ]
then 
	echo "the number is divisible by 5"
else 
	echo "the number is not divisible by 5"
fi
