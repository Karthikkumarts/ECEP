#include<stdio.h>
void sum(int*, int*,int);
int main()
{
    int a=10,b=10,c=0;
    sum(&a,&b,c);
    printf(" sum = %d product = %d",a,b);
}
void sum(int *ptr1 , int *ptr2,int ptr3)
{
    ptr3 = (*ptr1) * (*ptr2);
    *ptr1= *ptr1 + *ptr2;
    *ptr2 = ptr3;
}
