#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    //decalre to hold the file descriptor
    int p[2];

    //create the pipe
    if(pipe(p) == -1)
    {
	perror("PIPE");
	exit(EXIT_FAILURE);
    }

    switch(fork())
    {
	case -1:
	    printf("fork call failed\n");
	    break;
	case 0:
	    printf("child process\n");
	    printf("p[0] : %d :: p[1] :%d\n",p[0],p[1]);
	    break;
	default:
	    printf("parent process\n");
	    printf("p[0] : %d :: p[1] :%d\n",p[0],p[1]);
	    break;
    }

}

