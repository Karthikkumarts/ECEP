#! /bin/bash
read -p "enter n value:" num
count=1
sum=0
while [ $count -le $num ]
do
	sum=$((sum+count))
	count=$((count+1))
done
echo "sum is $sum"
echo "existing program"
