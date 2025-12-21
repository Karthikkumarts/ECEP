#! /bin/bash
if [ -f emp.txt ]
then
	echo "its regular file"
else 
	echo "not a regular file"
fi
if [ -e emp.txt ]
then 
	echo "not  empty"
	head -2 emp.txt

else	
	echo "its  empty"
fi	
