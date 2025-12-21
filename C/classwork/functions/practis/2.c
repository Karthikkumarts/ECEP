#include<stdio.h>
int even_odd(int num)
{
    if(num % 2 == 0)
    printf("even\n");
    else
	printf("odd\n");
}
int main()
{
    int a,res;
    printf("enter the number : ");
    scanf("%d",&a);
    even_odd(a);
}
