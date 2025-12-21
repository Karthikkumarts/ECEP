#! /bin/bash
#program to calculate BMI
read -p " enter 2 numbers:" weight height
height_sqr=`echo "$height*$height"|bc`
BMI=`echo "scale=2;$weight/$height_sqr"|bc`
echo "$BMI"
if [ `echo "18.5 > $BMI"|bc` -eq 1 ]
then 
	echo "under weight"
elif [ `echo "18.5 <$BMI && $BMI <24.9"|bc` -eq 1 ]
then 
	echo "normal"
elif [ `echo "25 < $BMI && $BMI < 29.9"|bc` -eq 1 ]
then
	echo "over wieght"
elif [ `echo "$BMI >= 30"|bc` -eq 1 ]
then
	echo "obesse"
fi
