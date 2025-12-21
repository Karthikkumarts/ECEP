#include<stdio.h>
int main()
{
    int num=0;
    if  ( num < 5 )
    {
	printf("num < 5\n");
    }
    else if (num > 5)
    {
	printf("num > 5\n");
	printf("hello\n");
    }
    else
	printf("num=0\n");
    printf("world\n");
    printf("num is %d\n",num);
    return 0;
}
