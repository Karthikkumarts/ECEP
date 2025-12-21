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
	    printf("fork() system call failure\n");
	    break;
	case 0:
	    //chid process
	    printf("child process pid : %d\n",getpid());
	    printf("child process parent pid : %d\n",getppid());
	    sleep(10); //this will make child to go sleep and cpu will be given to parent by scheduler
	    printf("child process pid : %d\n",getpid());
	    printf("child process parent pid : %d\n",getppid());
	    printf("child died\n");
	    break;
	default:
	    cpid = wait(NULL);
	    printf("parent process pid : %d\n",getpid());
	    printf("patrent process child pid : %d\n",pid);
	    printf("parent died\n");
	    break;
	    

    }

}
