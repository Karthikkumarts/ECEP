#include<stdio.h>
int main()
{
    FILE *fp,*fp2;
    char ch;
    fp = fopen("test.txt","r");
    fp2 = fopen("test_copy.txt","w");
    if(fp == NULL)
    {
	printf("file doesnt exists\n");
    return 1;
    }
	printf("file exists\n");
	while((ch = getc(fp)) != EOF )
	{
	    putc(ch,fp2);
	}
    fclose(fp);
    fclose(fp2);
    return 0;
}
