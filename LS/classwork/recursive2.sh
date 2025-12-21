#! /bin/bash
function sum()
{
    var=$1
    if [ $var -gt 3 ]
then 
    return
    fi
    echo "hello"
    var=$((var+1))
    sum $var
}
sum 0
