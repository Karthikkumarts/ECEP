#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("/etc/shells","r");

    while(ch = fgetc(fp))
    {
	if(feof(fp))
	{
	    break;
	}
	fputc(ch,stdout);
    }
fclose(fp);
}
