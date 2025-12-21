#! /bin/bash
#program to show the year is leap or normal year
read -p "enter a numbers:" number
if [ `expr $number % 4` -eq 0 ]
then 
	echo "the given year is leap year"
else 
	echo "the given year is not leap year"
fi
