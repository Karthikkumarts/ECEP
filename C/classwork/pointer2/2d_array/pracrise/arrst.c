#include<stdio.h>
int main()
{
    char a[3]="hi";
    char b[3]="how";
    char c[3]="are";
    char d[3]="you";

    char *str[4]={a,b,c,d};
    for(int i = 0 ; i < 3 ; i++)
    {
	for(int j = 0 ; j <3 ; j++)
	{
	    printf("%c",*(str[i]+j));
	}
	printf("\n");
    }

}
