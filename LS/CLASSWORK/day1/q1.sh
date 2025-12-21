#! /bin/bash
# program to find perimeter of rectangle
read -p "enter the length and breadth:" length breadth
perimeter=`echo "2*($length+$breadth)"|bc`
echo " the value of perimeter is $perimeter "

