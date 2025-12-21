#include<stdio.h>
int main()
{
    char s[3][8]={
	{"array"},
	{"of"},
	{"string"}
    };
    printf("%s %s %s\n",s[0],s[1],s[2]);
    for (int i=0;i<3;i++)
    {
    for (int j=0;s[i][j] != '\0';j++)
    {
	printf("%c",s[i][j]);
    }
    printf(" ");
    }
    printf("\n");
    printf("%c",s[1][1]);
    printf("%c",(*(s[1]+1)));
}
