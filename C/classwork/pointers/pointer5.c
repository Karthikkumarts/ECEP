#include<stdio.h>
int main()
{
    int x=5,y=10;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
/*printf("&x is %p\n",&x);
printf("ptr1 is %p\n",ptr1);
printf("&y is %p\n",&y);
printf("ptr2 is %p\n",ptr2);


printf("x is %d\n",x);
printf("*ptr is %d\n",*ptr1);
printf("y is %d\n",y);
printf("*ptr2 is %d\n",*ptr2);*/


 y=*ptr1;
printf("y is %d\n",y); 
/* x=*ptr2;
printf("x is %d\n",x);*/ 
 *ptr2=x;
printf("y is %d\n",y);
printf("*ptr2 is %d\n",*ptr2);

/* *ptr2=100;
printf("y is %d\n",y);
printf("*ptr2 is %d\n",*ptr2);*/



}



