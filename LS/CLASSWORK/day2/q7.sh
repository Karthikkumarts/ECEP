#! /bin/bash
#program to print all even no. from m to n
read -p "enter starting number:" m
read -p "enter ending number:" n
if [ `expr $m % 2`-eq 0: -a `expr $n % 2` -eq 0 ]
then 
	echo "the two given numbers are even"
	m=`expr $m + 2`
	n=`expr $n - 2`
	for i in `seq $m 2 $n`
	do 
		echo -n " $i "
	done
else
	echo "the two given numbers are odd"
	m=`expr $m + 1`
	n=`expr $n - 1`
	for i in `seq $m 2 $n`
	do 
		echo -n " $i "
	done
fi
