#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[]="hello";
    char *dup;
    //duplicate string dup contains the address of duplicate string
    dup=strdup(str);
    if (dup == NULL)
    {
	printf("error : memory allocation failed in string");
	return 1;
    }
    puts("printing the duplicate string");
    puts(dup);
}

