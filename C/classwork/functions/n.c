#include<stdio.h>
void modify(int *a,int *b);
int main()
{
    int a=10,b=15;
    printf("before modification  %d %d\n",a,b);
    modify(&a,&b);
    printf("after  modification  %d %d\n",a,b);

}
void modify(int *a,int *b)
{
    *a=*a+5;
    *b=*b+5;
}
