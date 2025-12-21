#include<stdio.h>
int main()
{
    int a=10,b=20,c=30;
    int *ptr[3];
    ptr[0]=&a;
    ptr[1]=&b;
    ptr[2]=&c;
    printf("%d\n",*ptr[0]);
    printf("%d\n",*ptr[1]);
    printf("%d\n",*ptr[2]);

    /*printf("%d\n",&a);
      printf("%d\n",&b);
      printf("%d\n",&c);*/


    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
    printf("%zu",sizeof(ptr));

}
