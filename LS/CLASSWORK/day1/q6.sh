#! /bin/bash
#program to show the sides of triangle is perfect right angle triangle
read -p "enter 3 numbers:" a b c
opp=$(($a*$a))
adj=$(($b*$b))
hyp=$(($c*$c))
sum=`echo $opp+$adj|bc`
if [ $sum -eq $hyp ]
then 
	echo "triangle is perfect right angle triangle"
else
	echo "triangle is not perfect right angle triangle"
fi 
