#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *ptr;

    ptr=a;
    printf("*ptr = %d\n",*ptr);

    ptr=ptr+1;
    printf("*ptr + 1 = %d\n",*ptr);

    printf("*ptr + 3  = %d\n",*(ptr+3));
printf("*ptr = %d\n",*ptr);
return 0;
}


