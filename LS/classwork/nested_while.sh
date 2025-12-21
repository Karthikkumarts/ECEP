#! /bin/bash
#program for nested while loop
count=0
while [ $count -lt 4 ]
do
	var=0
	while [ $var -lt 3 ]
	do 
		echo -n "hello-$var "
		var=$((var+1))

	done
	echo 
	count=$((count+1))
done

