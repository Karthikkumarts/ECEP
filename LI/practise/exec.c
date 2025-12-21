#include<stdio.h>
#include<unistd.h>

int main()
{
    printf("exec pid : %d\n",getpid());
    printf("exec parent pid : %d\n",getppid());

    execlp("kp","ls",(char *)NULL);
}
