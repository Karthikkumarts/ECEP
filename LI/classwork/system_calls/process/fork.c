#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
    printf("this statement will be executed only by parent\n");
    pid_t ret;
    ret =   fork(); //creates a duplicate process i,e child process
    printf("hello world %d\n",ret);
}

