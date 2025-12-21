#include<stdio.h>
int main()
{
    int num;
    printf("enter the number ");
    scanf("%d",&num);
	if ( num < 5 )
	{
	    printf("num < 5\n");
	    printf("hello\n");
	}
	else
	{
	    printf("num > 5\n");
	    printf("world\n");
	}
    printf("num is %d",num);
    return 0;
}
