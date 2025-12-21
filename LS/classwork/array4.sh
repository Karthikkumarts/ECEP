#! /bin/bash
#program to print the word and its legnthvar
echo "length of cla os : $#"
for i in $@
do
	echo " $i - ${#i}"
done
