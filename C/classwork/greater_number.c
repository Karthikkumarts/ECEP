#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter two values num1 and num2:");
   scanf("%d %d",&num1,&num2);
   if (num1 > num2 )
       printf("%d is max", num1);
   else 
       printf("%d is max",num2);
}
