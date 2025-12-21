#!/bin/bash
read -p "enter the numbers to addition:" number1 number2
var='^[0-9.]+$'
if [[ $number1 =~ $var ]] #comparing input 1 with var
then
    if [[ $number2 =~ $var ]] #comparing input 2 with var
    then
	sum=`echo "$number1 + $number2"|bc` #adding two numbers using pipes and bc
	echo "answer is $sum" #prints the output
    fi
else
    echo "ERROR:-please enter only integers or real number"
fi
