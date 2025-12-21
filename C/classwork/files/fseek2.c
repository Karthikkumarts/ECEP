#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("text.txt","r");
    printf("%ld\n",ftell(fp));
    fseek(fp,5,SEEK_SET);
    printf("%ld\n",ftell(fp));
    while((ch =getc(fp)) != EOF)
    {
	fputc(ch,stdout);
    }
    printf("%zu",ftell(fp));
    return 0;
}
