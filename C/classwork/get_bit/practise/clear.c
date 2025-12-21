#include<stdio.h>
int main()
{
    int num = 0xF7 , i , number  = 0x37 ;
    for(i = 7 ; i >=0 ; i--)
	num & (1 << i)?printf("1 ") : printf("0 ");
    int mask = ~(1 << 2);
    int res = num & mask;
    printf("\n");
    for(i = 7 ; i >=0 ; i--)
	res & (1 << i)?printf("1 ") : printf("0 ");
    printf("\nsecond example\n");
    for(i = 7 ; i >=0 ; i--)
	number & (1 << i)?printf("1 ") : printf("0 ");
    int mas  = ~(((1 << 2) - 1)<< 4 );
	int result = number & mas;
	printf("\n");
    for(i = 7 ; i >=0 ; i--)
	mas & (1 << i)?printf("1 ") : printf("0 ");
    printf("\n");
    for(i = 7 ; i >=0 ; i--)
	result & (1 << i)?printf("1 ") : printf("0 ");


}
