<< DOCUMENTATION
NAME - KARTHIK KUMAR TS 
DATE - 12/10/21
DESCRIPTION - WAS to calculate the BMI
SAMPLE INPUT - Enter the weight in kg :45.5
Enter the height in meters :1.5
SAMPLE OUTPUT - you are normal
DOCUMENTATION
#! /bin/bash
read -p " enter weight in kg:" weight
read -p " enter height in meters:" height
var='^[0-9.]+$' #to check whether the given input number is  real or integer
    if [[ $weight =~ $var ]] #comparing the input 1 with var 
    then
	if [[ $height =~ $var ]] #comparing the input 2 with var
	then
	    height_sqr=`echo "$height*$height"|bc`
	    BMI=`echo "scale=2;$weight/$height_sqr"|bc` # formula for BMI
	    if [ `echo "18.5 > $BMI"|bc` -eq 1 ] #if bmi is < 18.5 then echo under weight
	    then 
		echo "you are under weight"
	    elif [ `echo "18.5 <$BMI && $BMI <24.9"|bc` -eq 1 ] # if BMI is between 18.5 and 24.9 then print normal
	    then 
		echo "you are normal"
	    elif [ `echo "25 < $BMI && $BMI < 29.9"|bc` -eq 1 ] #if BMI is between 25 and 29.9 then echo over weight
	    then
		echo "you are over wieght"
	    elif [ `echo "$BMI >= 30"|bc` -eq 1 ] #if BMI is greater or equal than 30 then echo obessed
	    then
		echo "you are obessed"
	    fi
else
    echo "ERROR:-please enter only positive number" #if the input is negative number then echo error
	fi
else
    echo "ERROR:-please enter only positive number" #if the input is negative number then echo error
    fi 
