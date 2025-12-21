#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int p[2];
    if(pipe(p) == -1)
    {
	printf("failed to create\n");
	return -1;
    }
    int num,number;
    char name[20]="karthik";
    pid_t pid = fork();
    switch(pid)
    {
	case -1:
	    printf("fork creation failed\n");
	    break;
	case 0:
	    printf("child process\n");
	    close(p[1]);
	    printf("p[0] : %d p[1] : %d\n",p[0],p[1]);
	    read(p[0],&name,sizeof(name));
	    printf("name : %s\n",name);
	    break;
	default:
	    printf("parent process\n");
	    close(p[0]);
	    printf("p[0] : %d p[1] : %d\n",p[0],p[1]);
	    write(p[1],&name,sizeof(name));
	    close(p[1]);
	    break;

    }
}
