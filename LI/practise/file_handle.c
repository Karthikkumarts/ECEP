#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<unistd.h>
#include<string.h>

int main(int argc , char *argv[])
{
    int fd,ret,fw;
    char buff[50];
    fd = open("f1.txt", O_RDONLY , 0777);
    if(fd == -1)
    {
	if(errno == EEXIST)
	printf("coldnt create the file as it already exists \n");
    }
    printf("file descriptor : %d\n",fd);

    ret = read(fd ,buff,50);
    if(ret == -1)
    {
	printf("failed to read\n");
    }
    printf("read data is ret : %d: %s\n",ret,buff);
    
    close(fd);


    fw = open("f2.txt", O_RDONLY , 0777);
    if(fw == -1)
    {
	if(errno == EEXIST)
	printf("coldnt create the file as it already exists \n");
    }

    int fs;
    fs = open("f3.txt",O_CREAT|O_WRONLY,0777);
    if(fs == -1)
    {
	if(errno == EEXIST)
	printf("coldnt create the file as it already exists \n");
    }
    printf("fs : %d fw :%d\n",fs,fw);
    char buf[50];
    int ret1;
    do{
     ret1 = read(fw,buf,50);
     write(fs,buf,ret1);
    }while(ret1 != 0);
    close(fs);
    close(fw);

}
