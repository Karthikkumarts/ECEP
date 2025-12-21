#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{

    int fd,fd1;
    char buff[50];
    fd = open("f2.txt",O_RDONLY);
    if(fd == -1)
    {
	fprintf(stderr,"open system call failed\n");
	return 1;
    }


    printf("the value of the file descriptor is %d\n",fd);

    int ret;
    do 
    {
	ret = read(fd,buff,50);
	write(1,buff,ret);
    }while(ret != 0);
}
