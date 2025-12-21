<<Documentation
Name: karthik kumar ts;
Date: 12-10-2021
Description: Program to perform arithmetic operation on digits of a given number depending upon the operator
Sample I/P: bash A08_operator_dependent.sh 1111x
Sample O/P: Mul is ==> 1
Documentation

#!/bin/bash
if [ $# -ne 0 ]                     #Checking if the input is entered in command line or not
then
    len=${#1}                           #Taking the count in command line
    count=$((len-1))                    #Decrementing only the last number or operator
    num=$((count-1)) 
    opr=${1:$count:1}                   #Taking the last value from command line argument
    case ${opr} in                      #Depending on the operator specified do arithmetic operation
        +) for i in `seq 0 $num`        #Addition operation
        do
            var=${1:$i:1}
            sum=$((sum + var))
        done
        echo "Sum is ==> $sum"
        ;;
    -)  sub=${1:0:1}               #Subtraction operation
        for i in `seq 1 $num`
        do
            var=${1:$i:1}
            sub=$((sub - var))
        done
        echo "Sub is ==> $sub"
        ;;
    x) mul=1                       #Multiplication opertion
        for i in `seq 0 $num`
        do
            var=${1:$i:1}
            mul=$((mul * var))
        done
        echo "Mul is ==> $mul"
        ;;
    /) div=${1:0:1}               #Division operation
        for i in `seq 1 $num`
        do
            var=${1:$i:1}
            div=`echo "scale=3; $div/$var" | bc`
        done
        echo "Div is ==> $div"
        ;;
    *) echo "Error : Operator missing or invalid operator, Please pass operator as last digit as (+,-,x,/)"
        ;;
esac
else 
    echo "Error : Please pass arguments"
    echo "usage : A08_operator_dependent.sh 1234+"
fi
