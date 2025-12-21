#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *input_fp;
    input_fp = fopen("text.txt","r");
    if(input_fp == NULL)
    {
	printf("file doesnt exists");
	return 1;
    }
    printf("file exists");
    fclose(input_fp);
}
