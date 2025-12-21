#include<stdio.h>
int main()
{
    int num=0x034;
    //printf("enter the number":)
    //scanf("%d",&num);
    if (num & 0x04)
	printf("1\n");
    else
	printf("0\n");
    return 0;
}
    

