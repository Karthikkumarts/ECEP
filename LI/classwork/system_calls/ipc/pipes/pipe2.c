#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    //decalre to hold the file descriptor
    int p[2];

    int count = 0;
    while(1)
    {
	//create the pipe
	if(pipe(p) == -1)
	{
	    printf("NO.of PIPES : %d\n",count);
	    perror("PIPE");
	    exit(EXIT_FAILURE);
	}
	count++;
	printf("p[0] : %d :: p[1] :%d\n",p[0],p[1]);
    }
}

