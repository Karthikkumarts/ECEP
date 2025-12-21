#! /bin/bash
echo "total no. of arguments: $#"
echo "arguments list : $@ "
echo "arguments list : $* "
sum=0
for i in $@
do
	echo "$i"
	sum=$((sum+i))

done
echo "sum of cla is :$sum"

