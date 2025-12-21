#include<stdio.h>
int main()
{
    int sum = 0;
    for(int i = 1 ; i <= 5 ; i++)
    {
	for(int j =1 ; j <= i ; j++)
	{
	    printf("%d",(sum+=1));
	}
	printf("\n");
    }
}

