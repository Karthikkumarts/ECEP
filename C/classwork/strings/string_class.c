#include<stdio.h>
#include<string.h>
int my_strlen(char *str);
int my_strlen(char *str)
{
    int count=0;
    while(*str)
    {
	printf("%c",*str++);
	count++;
    }
    printf("\n");
    return count;
}

int main()
{
    char str1[] = "hello world";
    char str2[] = "karthik";
    int len,ch;
    len=my_strlen(str1);
    printf("len =%d\n",len);
    len=my_strlen(str2);
    printf("len =%d\n",len);
    printf("\n");
    len=my_strlen("hello");
    printf("len =%d\n",len);
}


