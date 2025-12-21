#include<stdio.h>
#include<unistd.h>

int main()
{
    int p[2];

    if(pipe(p) == -1)
    {
	printf("pipe creation failed\n");
    }
    printf("p[0] :%d p[1] :%d\n",p[0],p[1]);

    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    pid_t pid;
    pid = fork();

    switch(pid)
    {
	case -1:
	    printf("fork cration failed\n");
	    break;
	case 0:
	    printf("child process\n");
	    printf("p[0] :%d p[1] :%d\n",p[0],p[1]);
	    close(p[1]);
	    read(p[0],&num,sizeof(num));
	    printf("num : %d\n",num);
	    close(p[0]);
	    break;
	default:
	    printf("parent process\n");
	    printf("p[0] :%d p[1] :%d\n",p[0],p[1]);
	    close(p[0]);
	    write(p[1],&num,sizeof(num));
	    close(p[1]);
	    break;

    }
}

