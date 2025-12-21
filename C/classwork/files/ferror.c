#include<stdio.h>
int main()
{
    FILE *fptr;
    char ch;
    fptr=fopen("text.txt","w");
    ch = fgetc(fptr); // error cant read because of write mode 
    if (ferror(fptr)) 
	fprintf(stderr,"error in reading form file :text.txt\n");
    clearerr(fptr);

    if (ferror(fptr)) 
	fprintf(stderr,"error in reading form file :text.txt\n");
    fclose(fptr);
    return 0;
}
