#include<stdio.h>
void print(const char *str);
int main()
{
    char *str="hello world";
   print(str);
  return 0;
}
void print(const char *str)
{
    while(*str)
    {
	putchar(*str++);
    }
}
