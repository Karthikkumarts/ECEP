#! /bin/bash
#program for sum and average
read -p "enter a number" n
sum=0
for i in ` seq $n`
do
	sum=$((sum+i))
done
echo "sum is $sum"
average=`echo "scale=2;$sum / $n"|bc`
echo " average is $average"
