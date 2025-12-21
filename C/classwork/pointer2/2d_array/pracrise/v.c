#include<stdio.h>
int main()
{
    int *ptr[3];
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    int c[3]={7,8,9};

    ptr={&a,&b,&c};
    printf("%d %d\n",ptr[0] , a);
}
