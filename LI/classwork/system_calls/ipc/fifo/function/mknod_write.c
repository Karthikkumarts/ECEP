#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define FILENAME "/tmp/p2"
int main()
{
    int fd,num;
    if(mknod(FILENAME,0666|S_IFIFO,0) < 0)
    {
	printf("mknod failed,file already exits");
    }
  
    fd = open(FILENAME,O_WRONLY);
    if(fd < 0)
    {
	fprintf(stderr,"file has not open\n");
	return 1;
    }
    
    write(fd,"hello",sizeof("hello"));
    close(fd);
    return 0;
}
