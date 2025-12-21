#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter num1 num2 :");
    scanf("%d %d",&num1,&num2);
    if(num1 > num2)
    {
	printf("num1 is greater\n");
    }
    else if(num2 > num1)
    {
	printf("num2 is greater\n");
    }
    else if(num1 == num2 )
    {
	printf("both the values are same\n");
    }


}
