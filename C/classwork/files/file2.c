#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1;
    char ch;
    fp1 = fopen("text.txt","r");
    if(fp1 == NULL)
    {
	printf("file doesnt exists");
	return 1;
    }
    printf("file exists\n");
    //ch = getc(fp1);
   // putchar(ch);
    while((ch = getc(fp1)) != EOF)
    {
	//putchar(ch);
	//putc(ch,stdout);
	fputc(ch,stdout);
    }
    fclose(fp1);
}
