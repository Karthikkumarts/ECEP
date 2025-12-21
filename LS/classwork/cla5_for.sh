#! /bin/bash
if [ $# -lt 2 ]
then echo "please provide more than 2 arguments"
        exit
fi
sum=0
#iterate over arguments($@)
for i in $@
do 
	sum=$((sum+i))
done
echo sum is $sum
