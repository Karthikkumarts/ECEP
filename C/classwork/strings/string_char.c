#include<stdio.h>
#include<string.h>
int main()
{
    char *str= "dehli:andrapradesh:bengaluru:manglore";
    char ch=':';
    char *ret;
   // strchr returns address of first occurance of the character in string
	ret= strchr(str,ch);
    if (ret != NULL)
	printf("ret 1 = %s\n",ret);
    else
	printf("not found\n");
   // strchr returns of the last occurance of the character in string
	ret=strrchr(str,ch);
    if (ret != NULL)
	printf("ret 2 = %s\n",ret);
    else
	printf("not found\n");
    return 0;
}

