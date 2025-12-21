#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
    fork();

    printf("the pid : %d\n",getpid());
    
}
