#include<stdio.h>
int x=10;
//int x; //un-initialised global variable,by default initialized with 0
void foo();
void foo()
{
   printf("%d\n",x);
   return ++x;
} 
int main()
{
    foo();
   printf("%d",x);
    return 0;
}
