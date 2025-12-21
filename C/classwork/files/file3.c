#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1 = fopen("text.txt","r");
    if(fp1 == NULL)
    {
	printf("file doesnt exists");
	return 1;
    }
    printf("file exists\n");
    fp2=fopen("text_copy.txt","w");


    while((ch = getc(fp1)) != EOF)
    {
	fputc(ch,fp2);
    }
    fclose(fp1);
}
