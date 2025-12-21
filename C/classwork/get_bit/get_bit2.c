#include<stdio.h>
int main()
{
    int num=0x034,i;
    //printf("enter the number":)
    //scanf("%d",&num);
    for (i=31;i>=0;i--) //31 for integer and 7 for character
    {
    if (num & 1 << i)
	printf("1 ");
    else
	printf("0 ");
    }
    return 0;
}
    

