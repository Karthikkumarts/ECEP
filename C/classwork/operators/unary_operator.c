#include<stdio.h>
int main()
{
    int x=5,y;
 printf("x = %d\n",x);
 printf("x = %d\n",++x);
 printf("x = %d\n",x++);
 printf("x = %d\n",x);
 
 y=++x;
 printf("y = %d x = %d\n",y,x);
 
 y=x++;
 printf("y = %d x = %d\n",y,x);

 return 0;
}
