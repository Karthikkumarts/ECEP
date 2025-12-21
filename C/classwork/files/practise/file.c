#include<stdio.h>
int main()
{
    FILE *fp,*fp2;
    fp = fopen("out.txt","r+");

    if(fp == NULL)
    {
	fprintf(stderr,"file doesnt exists");
	return 1;
    }
    char ch;
fseek(fp,5,SEEK_SET);
fputc('k',fp);

char charr[20]="karthik";
printf("%ld\n",ftell(fp));
fseek(fp,0,SEEK_END);
printf("%ld\n",ftell(fp));

fclose(fp);
}

