#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
    pid_t pid;
    pid = fork();
    switch(pid)
    {
	case -1:
	    printf("failed to create fork system call\n");
	    break;
	case 0:
	    printf("child process\n");
	    printf("pid : %d\n",getpid());
	    printf("getppid : %d\n",getppid());
	    break;
	default:
	    printf("parent process\n");
	    printf("pid : %d\n",pid);
	    printf("getpid : %d\n",getpid());
	    break;
    }
}
