#include<stdio.h>
int main()
{
    short x = 5;
    printf("x= %zubytes\n",sizeof (x));
    printf("++x= %zubytes\n",sizeof(++x));
    printf("+x= %zubytes\n",sizeof(+x));
    printf("!x= %zubytes\n",sizeof(!x));
    printf("~x= %zubytes\n",sizeof(~x));
    printf("-x= %zubytes\n",sizeof(-x));
    return 0;
}
