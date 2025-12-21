#! /bin/bash
# fibonacci upto n numbers
read -p "enter the number :" n
a=0
b=1
for i in `seq $n`
do 
    if [ $a -le $n ]
    then
	echo -n "$a"
	sum=`expr $a + $b`
	a=$b
	b=$sum
	fi
    done

