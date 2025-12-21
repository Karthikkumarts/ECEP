#include<stdio.h>
int fun(int num);
int main()
{
     printf("%d",fun(4));
     return 0;
}
int fun(int num)
{
    if (num==0)
	return 1;
    else
	return 7 + fun(num - 2);
}
