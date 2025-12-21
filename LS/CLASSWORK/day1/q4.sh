#! /bin/bash
#program to show the product of 2 numbers is odd or even
read -p "enter 2 numbers:" num1 num2
product=`echo "$num1*$num2"|bc`
if [ `expr $product % 2` -eq 0 ]
then 
	echo "the product of 2 numbers is even"
else 
		echo "the product of 2 numbers is odd"
fi
