#include<stdio.h>
int main()
{
    int i=10; //local variable
    {
	int i=0;
	printf("i %d\n",i);
    }
    printf("%d",i);
    
}
