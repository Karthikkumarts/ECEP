#include<stdio.h>
#include<string.h>
int main()
{
    char *str1="o";
    char *str2="helloworld";
    char ret[15] = strstr(str2,str1);
    
  printf("%s",ret);
}
