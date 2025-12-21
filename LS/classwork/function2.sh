#! /bin/bash
# program shows usage of function with arguments
#this function assumes that 2 numbers are passed to function
#function defination
function find_sum()
{
    sum=`expr $1 + $2`
    echo "$sum"
}
#pass arguments 10 and 20 to find_sum function
result1=`find_sum 10 20` #can also find other sum by giving $1 and $2
result2=`find_sum 100 200`
#save the output of function in a variable
#storing the output to variable
echo "sum is $result1"
echo "sum is $result2"
