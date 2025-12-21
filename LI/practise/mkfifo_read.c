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
    fd = open(FILE_NAME,O_RDONLY);
    if(fd < 0)
    {
	printf("file not present\n");
    }
    printf("recieved message\n");
    read(fd,&num,sizeof(num));
    printf("num : %d\n",num);
    read(fd,&num,sizeof(num));
    printf("num : %d\n",num);

    close(fd);

}

