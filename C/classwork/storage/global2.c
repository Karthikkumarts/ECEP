#include<stdio.h>
/*int x=10;
int x=20;  //redefination error
void foo()
{
   printf("%d",x);
   return ++x;
} */
int x=10;
int y=x; //error
void foo()
{
   printf("%d",x);
   return x;
} 
int main()
{
    foo();
    return 0;
}
