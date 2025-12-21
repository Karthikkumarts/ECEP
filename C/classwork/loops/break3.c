#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
	printf("i--->%d\n",i);
	for(j=0;j<5;j++)
	{
	    if(i==3)
		break;
	    printf("loop %d\n",j);
	}
	    printf("%d\n",i);
    }
}
