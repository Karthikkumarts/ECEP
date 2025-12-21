#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    //decalre to hold the file descriptor
    int p[2];
    int num;
    //create the pipe
    if(pipe(p) == -1)
    {
	perror("PIPE");
	exit(EXIT_FAILURE);
    }

    //pid_t pid =fork();
    switch(fork())
    {
	case -1:
	    printf("fork call failed\n");
	    break;
	case 0:
	    printf("child process\n");
	    printf("p[0] : %d :: p[1] :%d\n",p[0],p[1]);
	    close(p[1]);
	    char buffer[6];
	    read(p[0],buffer,6);
	    printf("%s\n",buffer);
	    close(p[0]);
	    break;
	default:
	    printf("parent process\n");
	    printf("p[0] : %d :: p[1] :%d\n",p[0],p[1]);
	    close(p[0]);
	    write(p[1],"hello",6);
	    printf("hi\n");
	    close(p[1]);
	    break;
    }

}
