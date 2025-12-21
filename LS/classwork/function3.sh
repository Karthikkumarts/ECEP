#! /bin/bash
#program shows usage of function with arguments
#inside functions :
# $# - give npo. of arguments
# $@ - contains the arguments to function 
# accessing function arguments is similar to accessing command line arguments

# function defination
function find_sum()
{
    echo "arg count: $#"
    echo "arg list: $@"
sum=0
#iterate over function
for arg in $@
do
    sum=`expr $arg + $sum`
done

echo "sum is $sum"
}
# call find_sum with many arguments
find_sum 1 2 3 4 5
find_sum $*

