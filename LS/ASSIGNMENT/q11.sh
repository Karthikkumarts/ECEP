<< DOCUMENTATION
NAME         :KARTHIK KUMAR TS
DATE         :18/10/21
DESCRIPTION  : write a script to print chess board
sample input : bash ass11.sh
sample output: print the chess board
DOCUMENTATION
#! /bin/bash
for i in `seq 8`  #<...intializing i to seq 8 using for loop
do 
    for j in `seq 8` #<...intializing j to seq 8 using for loop
    do
	sum=`expr $i + $j`  #<...addition of $i and $j
	if [ $((sum % 2)) -eq 0 ] #<...if modules is equal to 0 then it prints white box..., if not prints black box
	then
	    echo -e -n "\e[47m" " "  #<...prints white box
	else
	    echo -e -n "\e[40m" " "  #<...prints black box
	fi
    done
    echo -e -n "\e[0m" " "
    echo 
done
