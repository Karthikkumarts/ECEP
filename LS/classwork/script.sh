#! /bin/bash
read a b
sum=`expr $a + $b`
sub=`expr $a - $b`
mul=`echo "scale=2;$a * $b"|bc`
echo " the value sum is $sum and sub is $sub and mul is $mul"
