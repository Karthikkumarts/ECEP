#! /bin/bash
#program to print number from m to n
read -p "enter starting number:" n1
read -p "enter ending number:" n2
for i in `seq $n1 $n2`
do
	echo "$i"
done

	
