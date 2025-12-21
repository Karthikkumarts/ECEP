#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("test.txt","r");
   // fp = fopen("test.txt","w");
    if(fp == NULL)
    {
	printf("file doesnt exists\n");
    return 1;
    }
	printf("file exists\n");
	while((ch = getc(fp)) != EOF )
	{
	    putchar(ch);
	}
    fclose(fp);
}
