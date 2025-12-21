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
    printf("fd : %d\n",fd);
    std_out_fd=dup(1);
    close(1);
    dup_fd = dup(fd);
    printf("dup_fd : %d\n",dup_fd);
    printf("std_out_fd : %d\n",std_out_fd);
    printf("helooooooooooooooooooooooooooo\n");
    write(fd ,"hi\n",sizeof("hi\n"));
    write(fd ,"hello\n",sizeof("hello\n"));
    close(1);
    std_out_fd_dup = dup(std_out_fd);
    printf("stdout restored\n");
}
