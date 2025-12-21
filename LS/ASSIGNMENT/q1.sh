<<DOCUMENTATION
NAME-KARTHIK KUMAR TS
DATE-12/10/21
DESCRIPTION - read n and generate the pattern
sample input-4
sample output-1
              1 2
              1 2 3 
              1 2 3 4
DOCUMENTATION
#! /bin/bash
read -p "enter a number:" number # to read the user input
if [ $number -ge 2 -a $number -le 32 ] # To check the numbers between 2 and 32 we are using if condition and logic operation
then
    for i in `seq $number` #to iterate over the row
    do
	for j in `seq $i` #to iterate over columns
	do
	    echo  -n " $j " #print the output
	done
	echo 
    done
else 
    echo "ERROR:-number out of range please enter 2 < number < 32 " # If the CONDITION is not satisfied then echo the error and end the program 
fi
