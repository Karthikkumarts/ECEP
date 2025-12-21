#! /bin/bash
#program to print sum of digits of entered number
read -p "enter a number:" n
sum=0
while [ $n -gt 0 ]
do
    k=$((n%10))
    n=$((n/10))
    sum=$((sum+k))
done
	echo "sum is $sum"

