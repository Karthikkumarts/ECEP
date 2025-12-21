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
    char buff[6];
  
    fd = open(FILENAME,O_RDONLY);
    if(fd < 0)
    {
	fprintf(stderr,"no such file is present\n");
	return 1;
    }
    
    read(fd,&buff,sizeof(buff));
    printf("%s\n",buff);
    close(fd);
    return 0;
}
