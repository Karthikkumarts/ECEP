#include<stdio.h>
int main()
{
    int i,j,sum=0;
    for(i=1;i<=4;i++)
    {
	for(j=1;j<=i;j++)
	{
	    sum=sum+1;
	    printf("%d",sum);
	}
	printf("\n");
    }
}
