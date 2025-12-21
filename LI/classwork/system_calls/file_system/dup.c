#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd,dup_fd;
    fd = open("f4.txt",O_CREAT | O_WRONLY,0644);
    if(fd == -1)
    {
	fprintf(stderr,"error opening the file");
	return 1;
    }
    //close stdout
    close(1);
    dup_fd=dup(fd);
    printf("wwwwwwhello\n");
    write(fd , "hello\n",strlen("hello\n"));
    write(fd , "world\n",strlen("world\n"));
}
