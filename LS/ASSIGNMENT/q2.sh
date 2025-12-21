<< DOCUMENTATION
NAME-KARTHIK KUMAR TS
DATE-12/10/21
DESCRIPTION-read n and generate a pattern 
sample inupt-enter the number:4
1
2 3 
4 5 6
7 8 9 10
DOCUMENTATION
#! /bin/bash
read -p "enter the number:" number  #<....to read users input
if [ $number -ge 2 -a  $number -le 32 ]  #<....using if condition and logic operator,verifying the number from 2 to 32
then
    sum=0 #<....initializing sum=0
    for i in `seq $number`   #<....to iterate over rows  
    do
	for j  in `seq $i`   #<....to iterate over column
	do
	    sum=$((sum+1))
	    echo -n  " $sum " #<....prints the output
	done
	echo
    done
else
    echo "ERROR:- number out of range please enter 2 < number < 32"  #<....If the condition is not satisfied then echo error and end the program
fi
