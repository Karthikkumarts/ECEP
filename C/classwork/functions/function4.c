#include<stdio.h>
int num ( int num1);

int num ( int num1)
{
    int result;
    if ( num1%2 ==0)
	return 1;
    else
	return 0;
   }
int main()
{
    int res;
    int a;
    printf("enter a num :");
    scanf("%d",&a);
    res=num(a);
   if (res== 1)
    printf("even");
    else  
    printf("odd");
}

