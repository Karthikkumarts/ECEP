#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
   for(;  (ch = getchar()) ; )
   {
	putchar(toupper(ch));
   }
}
