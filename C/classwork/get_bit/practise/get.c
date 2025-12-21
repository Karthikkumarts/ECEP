#include<stdio.h>
int main()
{
    char ch =0x35;
    ch & (1<< 2)?printf("1 "): printf("0 ");
}
