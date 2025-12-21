#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
	printf("i--->%d\n",i);
	printf("hello\n");
	if(i==3)
	{
	    printf("world\n");
	    continue;
	}
	printf("%d\n",i);
    }
}
