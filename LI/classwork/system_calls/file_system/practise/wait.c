#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
    pid_t pid,cpid;
    int status;
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
	    sleep(5);
	    printf("child died\n");
	    break;
	default:
	    cpid=waitpid(-1,NULL,0);
	    if (WIFEXITED(status))
	    {
		printf("child terminated normally\n");
	    }
	    else
		printf("child terminated abnormally\n");
	    printf("parent process\n");
	    printf("pid : %d\n",pid);
	    printf("getpid : %d\n",getpid());
	    break;
    }
}
