#! /bin/bash
#program for factorial
read -p "enter a number" n
factorial=1
for i in ` seq $n`
do
	factorial=$((factorial*i))
done
echo "factorial  is $factorial"
