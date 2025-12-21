/*#include<stdio.h>
int main()
{
    int num=0x034,i;
    unsigned mask=1 << 31;
    //printf("enter the number":)
    //scanf("%d",&num);
    for (i=0;i < 32;i++) //31 for integer and 7 for character
    {
    if (num & mask >> i)
	printf("1 ");
    else
	printf("0 ");
    }
    return 0;
}*/
    

#include<stdio.h>
int main()
{
    int num,i;
    unsigned mask= 1 << 31;
    printf("enter the number:");
    scanf("%d",&num);
    for (i=0;i < 32;i++) //31 for integer and 7 for character
    {
	if (i % 8 == 0)
	    printf(" ");
    if (num & mask >> i)
	printf("1 ");
    else
	printf("0 ");
    }
    printf("\n");
    return 0;
}
