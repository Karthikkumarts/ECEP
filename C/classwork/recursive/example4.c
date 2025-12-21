#include<stdio.h>
int fun(int num);
int main()
{
    int n=3;
    printf("%d",fun(n));
    return 0;
}
int fun(int num)
{
    if (num == 1)
	return 1;
    else
	return 1 + fun(num - 1);
}
