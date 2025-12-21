#include<stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("kar.txt","w+");
	if(fp == NULL)
	{
		fprintf(stderr,"failed to open the file\n");
		return 1;
	}

	fprintf(fp,"hi karthik\n hello meghana\n");

	printf("%ld\n",ftell(fp));

	fseek(fp,0,SEEK_SET);
	char ch;
	while((ch = getc(fp)) != EOF)
	{
		printf("%ld ",ftell(fp));
		putchar(ch);
		printf("\n");

	}

	fclose(fp);
}
