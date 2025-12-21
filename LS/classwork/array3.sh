#! /bin/bash
#program shows, how array can e declared and accessed
#declaare an array
# collecting list of cmd arguments in to an array
arr=($@)
#print size/lenght of array
echo "length : ${#arr[*]}"
echo "whole array : ${arr[@]}"
echo "whole array :${arr[*]}"
echo "looping over array elements"
#iterate over array elements
for item in ${arr[@]}
do 
	echo $item
done
#sum of command line arguments
echo "iterating over array and finding sum"
sum=0
for item in ${arr[@]}
do 
	sum=$((sum+item))
done
echo "sum is $sum"
echo "iterating over array based on length and finding sum"
len=$((${#arr[*]}-1))
sum=0
for item in `seq $len`
do 
	sum=$((sum+item))
done
echo "sum is $sum"

