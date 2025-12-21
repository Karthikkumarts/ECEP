#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("text.txt","a");
    if(fp == NULL)
    {
	printf("file doesnt exists\n");
    }
    fseek(fp,0,SEEK_END);
    fprintf(fp,"\nhi karthik\n");
    fclose(fp);
}
