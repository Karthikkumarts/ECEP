#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{

    int fd,fd1;
    char buff[50];
    fd = open("f1.txt",O_RDONLY);

    if(fd == -1)
    {
	fprintf(stderr,"open system call failed\n");
	return 1;
    }

    fd1 = open("f2.txt",O_CREAT|O_WRONLY,0664);

    printf("the value of the file descriptor is %d\n",fd);
    printf("the value of the file descriptor is %d\n",fd1);

    int ret;
    do 
    {
	ret = read(fd,buff,50);
	write(fd1,buff,ret);
    }while(ret != 0);
}
