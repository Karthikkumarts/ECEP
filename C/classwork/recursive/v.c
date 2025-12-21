#include<stdio.h>
int fun(int num)
{
    if(num == 1)
	return 1;
    else
	return num*(fun(num-1));
}
int main()
{
    printf("factorial of 5 : %d\n",fun(5));
}
