#include<stdio.h>
#include<string.h>
int main()
{
   char *str1="hello world";
    char *str2="hello";
    int ret = strcmp(str1,str2);
    printf("ret =%d\n",ret);
    //strcmp compares two strings
    if (strcmp(str1,str2) == 0)
    {
	printf("strings are equal %s = %s\n",str1,str2);
    }
    else
    {
	printf("strings are not equal\n");
    }

    int n=3;
    if (strncmp(str1,str2,n) == 0)
    {
	printf("strings are equal %s = %s\n",str1,str2);
    }
    else
    {
	printf("strings are not equal\n");
    }
    return 0;

}
    




