#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

void fun(int a,int b,int process);

void fun(int a,int b,int process)
{
    if(process == 1)
    {
	printf("parent process\n");
    }
    else
    {
	printf("child process\n");
    }

    printf("sum : %d\n",a+b);
    printf("\n");

}

int main()
{
    pid_t pid;
    pid = fork();

    switch(pid)
    {
	case -1:
	printf("failed to create a process\n");
	break;

	case 0:
	printf("child process\n");
	printf("parent pid : %d\n",getppid());
	printf("child pid : %d\n",getpid());
	fun(5,3,2);
	break;

	default:
	printf("parent process\n");
	printf("parent pid : %d\n",getpid());
	printf("child pid : %d\n",pid);
	fun(98,3,1);

    }
}
