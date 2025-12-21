#!/bin/bash
<<DOCUMENTATION
Name        :KARTHIK KUMAR TS
Date        :18/10/2021
Description :WAS to print a given number in reverse order
Sample I/P  : 12345
Sample O/P  : 54321
DOCUMENTATION
num=$1 #read the input through command line
sum=0
var='^[0-9+-]+$' 
length=${#num}
if [ $# -ge 1 ]
then
    if [[ $num =~ $var ]] #<...To check whether the given input is integer or not
    then
	if [ $length -eq 1 ] #<...To check given input is multi digit number or not
	then
	    echo "ERROR:Pass a multi digit number"
	else
	    while [ $num -gt 0 ] #<...If the input is multi digit number then it performs below given task
	    do
		a=$((num % 10))
		sum=$(($((sum*10))+a))
		num=$((num/10))
	    done      
	    echo "Reversed number- $sum"
	fi
    else
	echo "ERROR:enter only numbers"
    fi
else
    echo "ERROR:no arguments passed"
fi

