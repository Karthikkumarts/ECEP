#include<stdio.h>
int main()
{
    int var = 0xA7,i;
    for(i = 7 ; i >= 0 ; i--)
    {
	 var & (1<<i) ? printf("1 "):printf("0 ") ;
    }
printf("\n");
    int mask;
    mask = (1 << 2);
    var &= ~mask;
    for(i = 7 ; i >= 0 ; i--)
    {
	 var & (1<<i) ? printf("1 "):printf("0 ") ;
    }
printf("\n");
    mask = (1 << 3);
    var |= mask;
    for(i = 7 ; i >= 0 ; i--)
    {
	 var & (1<<i) ? printf("1 "):printf("0 ") ;
    }
printf("\n");
    mask = (1 << 3);
    var & mask ? printf("1 "): printf("0 ");
    printf("\n");
printf("\n");
    mask = ((1 << 3)-1)<<3;
    var ^= mask;
    for(i = 7 ; i >= 0 ; i--)
    {
	 var & (1<<i) ? printf("1 "):printf("0 ") ;
    }

}
