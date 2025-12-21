#include<stdio.h>
int main()
{
    int *p;
    int x= 10;
    p = &x;

    printf("size of x : %d\n",sizeof x);
    printf("size of p : %d\n",sizeof p);

    printf("value of x : %d\n",x);
    printf("value of p : %d\n",p);
    printf("value of *p : %d\n",*p);
}
