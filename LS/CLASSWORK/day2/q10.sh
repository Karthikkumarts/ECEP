#! /bin/bash
#program to write fibanccoi
read -p "enter the number:" n
a=0
b=1
for i in `seq $n`
    do
	echo -n "$a"
    sum=`expr $a + $b`
    a=$b
    b=$sum
done
