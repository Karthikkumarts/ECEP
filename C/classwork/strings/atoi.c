#include<stdio.h>
#include<stdlib.h>
int main()
{
   int num;
    char str[20]="-123";
    printf("str = %s\n",str);
   num=my_atoi(str);
    printf("num = %d\n",num);
    return 0;
}
int my_atoi(char *ptr)
{
    int n=0,flag=1;
    while(*ptr != NULL)
    {
	if (*ptr == '-')
	{
	    flag = -1;
	    ptr++;
	}
	if (*ptr >= '0' && *ptr <= '9')
	{
	    n = (n*10) + (*ptr - 48);
	    ptr++;

	}
	else
	    break;
    }
    return n * flag;
}
