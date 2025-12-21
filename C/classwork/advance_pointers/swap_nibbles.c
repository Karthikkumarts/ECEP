#include<stdio.h>
int fun(int x)
{
    int left=(x & 0x0F) << 4;
   int right = (x & 0xF0) >> 4;
  return (left|right); 
}
int main()
{
int x=0xAB;
for(int i=7;i>=0;i--)
x & (1<<i)?printf("1 "):printf("0 ");
printf("\n");
int c=fun(x);
for(int i=7;i>=0;i--)
c & (1<<i)?printf("1 "):printf("0 ");
printf("\n");
}

