#include<stdio.h>

int fact_(int a)
{
    if(a == 1)
	return 1;
    else
	return a * fact_(a-1);
}
int main()
{
    int fact = 1,i,a=3;
    /*printf("enter the number : ");
    scanf("%d",&a);*/
    i = fact_(a);
/*    for(i = 1 ; i <=a ; i++ )
	fact = fact * i;*/
    printf("factorial of the number % d is %d\n",a,i);
}
