#include<stdio.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
    pid_t pid,cid;
    int status;
    pid = fork();

    switch(pid)
    {
	case -1:
	    printf("failed to create child process\n");
	    break;
	case 0:
	    printf("child process\n");
	    break;
	default:
	   cid =  wait(&status);
	   printf("parent process\n");
	   if(cid)
	   printf("child terminated normally\n");
	   else
	   printf("child terminated abnormally\n");
	    printf("pid : %d\n",getpid());
	    break;
    }

}

