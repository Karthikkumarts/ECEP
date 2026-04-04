#include<stdio.h>

int main()
{
    int x=100;
    int  y;
   /* int *const ptr=&x; //ptr is constant
	y=*ptr;
    ptr++; //this is not allowed
    *ptr=5;
    printf("%d\n",*ptr);
    ptr[0]=1000;
    printf("%d\n",(*ptr)++);*/

    const  int * ptr=&x; // *ptr is constant
    y=*ptr;
    printf("%d",*ptr);
    *ptr = 20; //this is not allowed
}
