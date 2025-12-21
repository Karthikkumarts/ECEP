#include<stdio.h>
int main()
{
    int num;
    printf("enter the num\n");
    scanf("%d",&num);
    int res=num%2;
    if (num > 0) //nested if
	if (res==0)
	    printf("num is even\n");
	else   
	    printf("num is odd\n");
    else
	printf("the number entered is less than 0");
    printf("num is %d\n",num);
    return 0;
}
