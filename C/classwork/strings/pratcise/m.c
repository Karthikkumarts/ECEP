#include<stdio.h>
int main()
{
    char *na="hello";
    char *ret = na;
    printf("%p\n",na);
    printf("%p\n",ret);
    printf("%c\n",*na);
    printf("%s",ret);
}
