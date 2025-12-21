#include<stdio.h>
int i=5;
int main()
{
    int i=10; //local variable
    {
	printf("i is %d\n",i);
    }
    printf("%d\n",i);


}
