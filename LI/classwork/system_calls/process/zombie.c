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
	    printf("fork() system call failure\n");
	    break;
	case 0:
	    //chid process
	    printf("child process pid : %d\n",getpid());
	    printf("child process parent pid : %d\n",getppid());
	    sleep(5); //this will make child to go sleep and cpu will be given to parent by scheduler
	    printf("child died\n");
	    break;
	default:
	    printf("parent process pid : %d\n",getpid());
	    printf("patrent process child pid : %d\n",pid);
	    sleep(2);
	    printf("parent died\n");
	    break;
	    

    }

}
