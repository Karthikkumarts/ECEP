#include<stdio.h>
#include<string.h>
int main()
{
    char src[6]="hello";
    char dest[6]={'\0'};;
    strncpy(dest,src,1);
    printf("%s",dest);
}
