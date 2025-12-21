#include<stdio.h>
int main ()
{
    int i,j;
    for(i=0;i<5;i++)
    { //can be used or deleted
	for(j=0;j<5;j++)
	{
	    printf("loop %d times\n",i);
	}
	printf("i---->%d\n",i);
    }
    printf("i---->%d\n",i);
    return 0;
}

