#include<stdio.h>
int main()
{
    int num;
    printf("enter the year: ");
    scanf("%d",&num);
    if(((num%4 == 0) && (num%100 != 0)) ||  (num % 400 == 0 ))
    {
	printf("ye it is leap year");
    }
    else
    {
	printf("no it is not leap year");
    }
}
