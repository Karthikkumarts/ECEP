<<DOCUMENTATION
NAME          :KARTHIK KUMAR TS
DATE          :18/10/21
DECRIPTION    :write a script to print the length of each and every string using arrays
sample input  :hello hai how are you ?
sample output : length of string (hello)-5
	       length of string (hai)-3
	       length of string (how)-3
	       length of string (are)-3
	       length of string (you)-3
	       length of string (?)-1
DOCUMENTATION
#! /bin/bash
if [ $# -gt 0 ]  #<...if argument is greater than zero then enter the loop..if not echo error
then
    for i in $@
    do
	echo "length of string ($i) - ${#i}"  #<...this prints the length of string
    done
else
    echo "ERROR: please pass the argument through command line"
fi

