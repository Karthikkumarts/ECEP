#! /bin/bash
#here also we can give var
function sum()
{
    var=0
    if [ $var -gt 3 ]
    then 
	return
    fi
    echo "hello"
    var=$((var+1))
    sum
}
sum
