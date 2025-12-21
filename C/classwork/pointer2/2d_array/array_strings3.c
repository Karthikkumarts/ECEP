#include<stdio.h>
void print(char *str[],int size);
int main()
{
    char *s[3]={
	"array",
	"of",
	"string"
    };
    printf("%s %s %s\n",s[0],s[1],s[2]);
    print(s,3);
    return 0;
}

void print(char *str[],int size)
{
    for (int i=0;i<size;i++)
    {
	printf("%s ",str[i]);
    }
    printf("\n");
}
