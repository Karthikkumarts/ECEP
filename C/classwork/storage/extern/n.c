#include<stdio.h>
int main()
{
    int avg=average(5,5);
    printf("%d",avg);
}
int average(int num1,int num2)
{
    int av;
    av=(num1+num2)/2;
    return av;
}
