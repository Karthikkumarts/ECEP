#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd,dup_fd,stdout_fd, dup_stdout;
    fd = open("f5.txt",O_CREAT|O_WRONLY,0777);
    stdout_fd = dup(1);

    dup2(fd,1); 
    printf("hi hello\n");
    write(fd,"hello\n",strlen("hello\n"));
    write(fd,"karthik\n",strlen("karthik\n"));

    dup2(stdout_fd,1);

    printf("stdout restored");    

}
