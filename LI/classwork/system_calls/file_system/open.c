#include<stdio.h>
#include<fcntl.h>
int main(int argc,char **argv)
{
	
    int fd,fd1;
    fd = open(argv[1],O_RDONLY);

    if(fd == -1)
    {
	fprintf(stderr,"open system call failed\n");
	return 1;
    }
    fd1 = open(argv[2],O_RDONLY);
    if(fd1 == -1)
    {
	fprintf(stderr,"open system call failed\n");
	return 1;
    }

    printf("the value of the file descriptor is %d\n",fd);
    printf("the value of the file descriptor is %d\n",fd1);
}
