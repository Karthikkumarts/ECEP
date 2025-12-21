#include<stdio.h>
int main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    int res=num%2;
    printf("num is %d\n",num);
    if (res==0)
    {
	printf("num is even");
    }
    else   
    {
	printf("num is odd");
    }
    return 0;
}
