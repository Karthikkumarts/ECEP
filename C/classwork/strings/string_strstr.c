#include<stdio.h>
#include<string.h>

int main()
{
    char *str="helloworld";
    char *substr="o"; //xyz and it will execute else part
    char *ret = strstr(str,substr);
    if (ret != NULL)
    printf("ret = %s\n",ret);
    else
	printf("not found");
    return 0;
}
