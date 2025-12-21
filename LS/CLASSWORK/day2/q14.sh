#! /bin/bash
#program to find the no. is prime or not
read -p "enter a number:" n
echo "$n"
count=0
for i in `seq $n`
do
    if [ `expr $n % $i` -eq 0 ]
    then
	count=$((count+1))
    fi
done   
if [ $count -eq 2 ]
then 
    echo "it is a prime number"
else
    echo "not a prime number"
fi
