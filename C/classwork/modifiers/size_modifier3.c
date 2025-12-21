#include<stdio.h>
int main()
{
    int num1=5;
    int num2=sizeof(++num1);
    int num3 =sizeof(num1 =100);
    printf("num1 is %d and num2 is %dbytes and num3 is %dbytes\n",num1,num2,num3);
    return 0;
}

