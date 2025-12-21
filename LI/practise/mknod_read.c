#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

#define FILE_NAME "/tmp/p1"
int main()
{
    int fd,num;

    mknod(FILE_NAME,0777|S_IFIFO,0);
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
    char buff[6];
    read(fd,&buff,sizeof(buff));
    printf("%s\n",buff);

    close(fd);

}

