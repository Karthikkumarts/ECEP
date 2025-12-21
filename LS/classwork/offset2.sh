#! bin/bash
num=56789
len=${#num} #length of the nnumber or string
echo "length of number : $len"
len=$((len-1))
sum=0
for i in `seq 0 $len` #iterating over digits of numbers & finding sum
do
	var=${num:$i:1} #offset method to fetch each digits
	sum=$((sum+var))
    done
echo "sum is $sum"
