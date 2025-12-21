#! /bin/bash
#program shows, how array can e declared and accessed
#declaare an array
fruits=(apple mango orange bannana)
#print size/lenght of array
echo "length : ${#fruits[*]}"
echo "whole array : ${fruits[@]}"
echo "whole array :${fruits[*]}"
echo "looping over array elements"
#iterate over array elements
for item in ${fruits[@]}
do 
	echo $item
done

