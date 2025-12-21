#! /bin/bash
#program shows usage of function with arguments
#inside functions :
# $# - give no. of arguments
# $@ - contains the arguments to function 
# accessing function arguments is similar to accessing command line arguments

# function defination
function find_sum()
{
	echo "all arguments $@"
    if [ $# -lt 2 ]
    then
	return  # return from function (indiacting failure) and "we can give exit"see the difference
    fi
sum=0
#iterate over function
for arg in $@
do
    sum=`expr $arg + $sum`
done

echo "sum is $sum"

}
# call find_sum with many arguments
 find_sum 1 2 3 
 find_sum $*
