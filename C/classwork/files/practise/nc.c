#include<stdio.h>
int main()
{
    for(int i = 0  ; i < 5 ; i++)
    {
	if(i == 1)
	{
	    printf("break");
	    break;
	}
	printf("%d",i);
    }
}
