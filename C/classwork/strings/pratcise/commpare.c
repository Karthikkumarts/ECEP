#include<stdio.h>
#include<string.h>
int main()
{
    int ret;
    char *str1="hello";
    char *str2="helloworld";
   ret =  (strncmp(str1,str2,4));
   if(ret ==0)
    {
	printf("equal");
    }
    else
	printf("enot equal");
    
}
