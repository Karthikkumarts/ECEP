#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

#define FILENAME "/tmp/p0"
int main()
{
    int fd,num;
    mkfifo(FILENAME,0777);
  
    fd = open(FILENAME,O_WRONLY);
    if(fd < 0)
    {
	fprintf(stderr,"file has not open\n");
	return 1;
    }
    
    num = 10;    
    write(fd,&num,sizeof(num));
    num = 20;    
    write(fd,&num,sizeof(num));
    printf("value sent to fifo\n");
    close(fd);
    return 0;
}
