#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("test.txt","r");
    fseek(fp,5,SEEK_SET);
    ch = getc(fp);
    putchar(ch);

    fseek(fp,-2,SEEK_CUR);
    ch = getc(fp);
    putchar(ch);

    fseek(fp,-2,SEEK_END);
    ch = getc(fp);
    putchar(ch);
    fclose(fp);
}
