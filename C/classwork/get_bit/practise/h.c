#include<stdio.h>
int main()
{
    int num = 0xA5;
    for(int i= 15 ; i >=0; i--)
	num & (1<< i)?printf("1 "):printf("0 ");
}
