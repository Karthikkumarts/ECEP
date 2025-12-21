#include<stdio.h>
#include<string.h>
int  my_atoi(char *str);
int main()
{
    char *str="-123";
    printf("%s\n",str);
    int num =  my_atoi(str);
    printf("%d",num);
}
int  my_atoi(char *str)
{
    int n=0,flag=1;
    while(*str != '\0')
    {
    if(*str == '-')
    {
	flag=-1;
	str++;
    }
    if(*str >= '0' && *str <= '9' )
    {
	n=(n*10) + (*str -'0');
	str++;
    }
    else
	break;
    }

    return n*flag;
} 
