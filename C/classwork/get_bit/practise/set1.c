#include<stdio.h>
int main()
{
    int num=0xFE, i;
    for(i = 7 ; i>=0;i-- )
	num & ( 1 << i)?printf("1 ") : printf("0 "); 
    printf("\n"); 
    int mask = 1<<0;
    int result = num | mask;
    for(i = 7 ; i>=0;i-- )
	result & ( 1 << i)?printf("1 ") : printf("0 "); 
    printf("\n second example\n");


    int number = 0x9F;
    for(i = 7 ; i>=0;i-- )
	number & ( 1 << i)?printf("1 ") : printf("0 "); 
    int mas = ((1<<2)-1)<<5;
    int res = number | mas;
    printf("\n"); 
    for(i = 7 ; i>=0;i-- )
	res & ( 1 << i)?printf("1 ") : printf("0 "); 

}
