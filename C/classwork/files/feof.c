#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char ch;
    fptr=fopen("text.txt","r");
    //need to do error checking on fopen()

    while(ch = fgetc(fptr))
    {
	if(feof(fptr))
	    break;
	fputc(ch,stdout);
    }
    fclose(fptr);
    return 0;
}

