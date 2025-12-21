#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

#define FILENAME "/tmp/p0"
int main()
{
    int fd,num;
    fd = open(FILENAME,O_RDONLY);

    if(fd < 0)
    {
	fprintf(stderr,"file has not open\n");
	return 1;
    }
        
    read(fd,&num,sizeof(num));
    printf("fifo message recieved : %d\n",num);
    read(fd,&num,sizeof(num));
    printf("fifo message recieved : %d\n",num);
    close(fd);
    return 0;
}
