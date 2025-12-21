#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd,dup_fd;

    int stdout_fd,dup_stdout;
    
    fd = open("f5.txt",O_CREAT | O_WRONLY,0644);
    if(fd == -1)
    {
	fprintf(stderr,"error opening the file");
	return 1;
    }
    stdout_fd=dup(1);
   // dup_fd=dup(fd);
    printf("fd before creating : %d\n",fd);
    dup2(fd,1);
    printf("fd after crating: %d\n",fd);

    printf("hello\n");
    write(fd , "hello\n",strlen("hello\n"));
    write(fd , "world\n",strlen("world\n"));

    dup2(stdout_fd,1);    
    printf("stdout restored\n");
}
