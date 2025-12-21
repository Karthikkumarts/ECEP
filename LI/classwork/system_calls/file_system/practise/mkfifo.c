#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#define MYFILE "/tmp/p2"
int main()
{
    int num,ret;

    ret =  mkfifo(MYFILE,0777);

    int fd;
    fd = open(MYFILE,O_WRONLY);
    if(fd < 0)
    {
	printf("not  opening the file\n");
	return -1;
    }
    num =10;
    write(fd, &num ,sizeof(num));
    num =20;
    write(fd, &num ,sizeof(num));
    printf("value sent\n");
    close(fd);
}

