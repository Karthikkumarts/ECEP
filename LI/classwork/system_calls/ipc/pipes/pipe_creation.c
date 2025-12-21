#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    //decalre to hold the file descriptor
    int p[2];
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    //create the pipe
    if(pipe(p) == -1)
    {
	perror("PIPE");
	exit(EXIT_FAILURE);
    }

    pid_t pid =fork();
    switch(pid)
    {
	case -1:
	    printf("fork call failed\n");
	    break;
	case 0:
	    printf("child process\n");
	    printf("p[0] : %d :: p[1] :%d\n",p[0],p[1]);
	    close(p[1]);
	    read(p[0],&num,sizeof(num));
	    printf("num : %d\n",num);
	    close(p[0]);
	    break;
	default:
	    printf("parent process\n");
	    printf("p[0] : %d :: p[1] :%d\n",p[0],p[1]);
	    close(p[0]);
	      /*printf("enter the number : \n"); // here we cant expect the result because
	      scanf("%d",&num);*/  // during scanf , scheduler will give cpu to child process as parent will wait for the user to pass the input 
	    write(p[1],&num,sizeof(num));
	    close(p[1]);
	    break;
    }

}


