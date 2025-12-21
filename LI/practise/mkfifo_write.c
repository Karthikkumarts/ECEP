#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

#define FILE_NAME "/tmp/p1"
int main()
{
    int fd,num;

    mkfifo(FILE_NAME,0777);
    fd = open(FILE_NAME,O_CREAT|O_WRONLY,0777);
    if(fd < 0)
    {
	printf("file not present\n");
    }
    num = 10;
    write(fd,&num,sizeof(num));
    num = 20;
    write(fd,&num,sizeof(num));
    printf("sent the values\n");
    close(fd);
    return 0;


}

