#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
    int fd,dup_fd;
    int std_out_fd,std_out_fd_dup;
    fd = open("f1.txt",O_CREAT|O_WRONLY,0644);
    if(fd == -1)
    {
	fprintf(stderr,"error ehile opening\n");
    }
    std_out_fd = dup(1);
    printf("before creating : fd :: %d\n",fd);
    dup2(fd,1);
    printf("after creating : fd :: %d\n",fd);
    printf("hello\n");
    write(fd,"hi\n",sizeof("hi\n"));
    write(fd,"bye\n",sizeof("bye\n"));
    dup2(std_out_fd,1);
    printf("stdout restored\n");
}
