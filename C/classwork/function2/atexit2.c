#include<stdio.h>
#include<stdlib.h>
void foo(void)
{
    printf("hello world in foo function\n");
}
void print(void)
{
    printf("I am in print function\n");
}
int main()
{
    void (*f)(void);
    atexit(foo);
    f=print;
    atexit(f);
 //   exit(0);
    printf("in main function\n");
    return 0;
}

