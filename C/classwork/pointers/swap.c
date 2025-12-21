#include<stdio.h>
void swap( int* ,int*);
int main()
{
    int a=5,b=10;
    printf( "before a = %d b = %d\n",a,b);
    swap(&a,&b);
    printf("after  a= %d b=%d",a,b);
    return 0;
}

void swap( int* ptr1 ,int* ptr2)
{
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}
