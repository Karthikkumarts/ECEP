#! /bin/bash
#program to calculate and print the sum of odd integers
read -p "enter starting number:" m
read -p "enter ending number:" n
for i in `seq $m $n`
do
    if [ $((i%2)) -ne 0 ]
    then
	echo $i
	sum=$((sum+i))
    fi
done
echo " sum is $sum"
	


