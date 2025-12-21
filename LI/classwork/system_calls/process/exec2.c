#include<stdio.h>
#include<unistd.h>
int main()
{
    printf("exec process id : %d\n",getpid());
    printf("exec parent process id : %d\n",getppid());
}
