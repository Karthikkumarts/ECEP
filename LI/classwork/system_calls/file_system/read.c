#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{

    int fd;
    char buff[50];
    fd = open("f1.txt",O_RDONLY);

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
	printf("%d\n",ret);
	printf("%s\n",buff);
    }while(ret != 0);
}
