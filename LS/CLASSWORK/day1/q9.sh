#! bin/bash
#program  to first is multiple of second
read -p "enter 2 number:" a b
if [ `expr $a % $b` -eq 0 ]
then 
	echo " first is multiple of second"
else
	echo " first is not  multiple of second"
fi
