#include<stdio.h>
int main()
{
    int a=0x23,i;
    printf("before setting\n");
    for(i=7;i>=0;i--)
    {
	a & (1<<i) ?printf("1 "):printf("0 ");
    }
    printf("\n");
    printf("after setting");
    printf("\n");
    int mask=(1<<3);
    int result=a^mask;
    for(i=7;i>=0;i--)
	result & (1<<i) ?printf("1 "):printf("0 ");

}
