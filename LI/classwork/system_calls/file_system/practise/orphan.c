#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
    pid_t pid = fork();
    switch(pid)
    {
	case -1:
	    printf("failed to create frok()\n");
	    break;
	case 0:
	    printf("child pid : %d\n",getpid());
	    printf("child's parent  pid : %d\n",getppid());
	    sleep(1);
	    printf("waked from1sec delay\n");
	    sleep(10);
	    printf("waked from 10 sec delay\n");
	    
	    break;
	default:
	    printf("parent pid : %d\n",getpid());
	    printf("parent's child pid : %d\n",pid);
	    sleep(1);
	    printf("parent waked\n");
	    break;
    }
}
