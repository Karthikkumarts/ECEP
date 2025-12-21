<<DOCUMENTATION
NAME-KARTHIK KUMAR TS 
DATE-12/10/21
DESCRIPTION-Write a script to read n and generate fibaonacci numbers
sample input-enter limit for fib series:10
sample output:0 1 1 2 3 5 8
DOCUMENTATION
#! /bin/bash
read -p "enter limit for fib series :" number # to read users input
var='^[0-9-]+$' #to verify  the given input is number[real or integer]
if [[ $number =~ $var ]] #comparing the number with var
then
    if [ $number -ge 0 ] # if number is less than 0 then show error
    then
	a=0 #intialize a
	b=1 #intialize b
	    while [ $a -le $number ] # the program will execute untill the given user input is greater than or equal to 0
	    do
		echo -n " $a " #this will print the output,after the loop is exceuted untill the condition is true
		sum=`expr $a + $b`
		a=$b
		b=$sum
	done
    else
	echo "ERROR:- please enter positive numbers" #if the number enterd is negative then it echo's please enter positive no.
    fi
else
    echo "ERROR:- please enter only numbers" #if we enter number with a letter then it must show please enter only numbers
fi
