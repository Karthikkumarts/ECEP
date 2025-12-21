#include<stdio.h>
int main()
{
    int x=5;
    int *ptr;
    ptr=&x; //store address of x in ptr
    printf("&x= %p\n",&x);
    printf("ptr = %p\n",ptr); // output number is hexa decimal
    return 0;
}

