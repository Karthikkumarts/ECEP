#include<stdio.h>
int fun(int num)
{
    if(num==1)
    return 1;
    else
	return num*fun(num-1);
}

int main()
{
    printf("%d",fun(5));
}
