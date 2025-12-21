#include<stdio.h>
int main ()
{
    int i,j;
    for(i=0;i<5;i++)
    {
	for(j=0;j<=i;j++)
	printf("*");
	printf("\n");
    }
    printf("i---->%d\n",i);
    return 0;
}

