#include<stdio.h>
int main()
{
    int a[3]={1,2,3};
    int b[3]={10,20,30};
    int c[3]={100,200,300};
    int *ptr[3]={a,b,c};

    for(int i = 0 ; i < 3 ; i++)
    {
	for(int j = 0 ; j < 3 ; j++)
	{
	    printf("%4d",*(ptr[i]+j));
	}
	printf("\n");
    }
}
