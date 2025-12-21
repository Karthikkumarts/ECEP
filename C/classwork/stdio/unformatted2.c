#include<stdio.h>
#include<ctype.h>

int main()
{
    int ch;
    for (; (ch = getc(stdin)) != EOF; )
    {
	putc(ch,stdout);
    }
    puts("EOF recieved");
    return 0;
}

