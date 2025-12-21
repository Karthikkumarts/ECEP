#! /bin/bash
#program shows usage of function

#function defination
function print_hello()
{
    echo "======"
    echo "hello"
    echo "======"
}
#call the function - print_hello
print_hello #to call 1 time otherwise use loops
#print_hello
for i in `seq 10`
do
    print_hello
done
