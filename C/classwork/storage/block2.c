#include<stdio.h>
int main()
{
    int j=10; //local variable
    {
	int j=0;
	printf("j is %d\n",j);
    }
    printf("%d",j);
    
}
