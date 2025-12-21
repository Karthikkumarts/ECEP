#include<stdio.h>
int main()
{
    if (sizeof("hello" "world") == sizeof("hello") + sizeof("world"))
    {    
	printf("yes\n");
    }
    else
    {
	printf("no");
    }
    return 0;
}
