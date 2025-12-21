#! /bin/bash
read -p "enter 2 numbers:" n1 n2
sum=`expr $n1 + $n2`
mul=`expr $n1 \* $n2`
div=`echo "scale=2;$n1/$n2"|bc`
sub=`expr $n1 - $n2`
echo " $sum $mul $div $sub"

