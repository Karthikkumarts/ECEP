#! /bin/bash
# program to find length and breadth is for square or rectangle
read -p "enter length and breadth:" length breadth
if [ $length -eq  $breadth ]
then 
	echo "the length and breadth is for sqaure"
else
	echo "the length and breadth is for rectangular"
fi	
