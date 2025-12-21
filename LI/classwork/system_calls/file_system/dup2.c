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
    
    fd = open("f3.txt",O_CREAT | O_WRONLY,0644);
    if(fd == -1)
    {
	fprintf(stderr,"error opening the file");
	return 1;
    }
    stdout_fd=dup(1);
    //close stdout
    close(1);
    dup_fd=dup(fd);

    printf("stdo_out : %d\n",stdout_fd);
    printf("dup_fd : %d\n",dup_fd);
    printf("hello\n"); //why this printing in stdout : because we have duplicated, assume duplicated stdout will be in 4th pos hence it will print it on stdout
    write(fd , "hello\n",strlen("hello\n"));
    write(fd , "world\n",strlen("world\n"));

    close(1);
    dup_stdout=dup(stdout_fd);
    printf("stdout restored\n");
}
