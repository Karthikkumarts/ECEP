#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("text.txt","r");
    printf("%ld",ftell(fp));
    return 0;
}
