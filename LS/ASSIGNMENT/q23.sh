<< Documentation
NAME         :KARTHIK KUMAR TS
DATE         :13/10/21
DESCRIPTION  : WAS to print the 5th line of a file passes through command line
sample input : file.txt
sample output:fifth line of file.txt is line 5
Documentation
#! /bin/bash
if [ $# -eq 1 ] #..if command line argumemt is less than 1 then it exits program if not the continue the the program
then 
    if [ -f $1 ] #..checks for file
    then
	len=`wc -l < $1` #..checks the length of file
	if [ 5 -gt $len ] #..if files consists 5 line then it executes further or it ends the program
	then
	    echo " $1 having only $len lines so cant print 5th line"
	else
	    head -5 $1|tail -1 #..prints 5th line of file
	fi
    else
	echo "no such file"
    fi
else
    echo "please pass the file name in command line"
fi
