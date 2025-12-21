#include<stdio.h>
#include<string.h>
int main()
{
    char *str="hello world";
    char *str2="hel";
    int ret = strcmp(str,str2);
    printf("%d\n",ret);
    if(strcmp(str,str2) == 0)
	printf("strings are equali\n");
    else
	printf("strings are  not equal\n");
    int n =3;
    if(strncmp(str,str2,n) == 0)
	printf("strings are equali\n");
    else
	printf("strings are  not equal\n");
    

}

