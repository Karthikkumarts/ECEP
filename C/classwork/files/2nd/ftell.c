#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("/etc/shells","r");

    printf("FIRST OFFSET IS AT->%ld\n",ftell(fp));
    printf("the content of the file is <--\n");
    while((ch =getc(fp)) != EOF )
    {
putchar(ch);
    }
    printf("\n file offset is at -> %ld\n",ftell(fp));
    fclose(fp);      
}
