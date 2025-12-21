#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
    int fd,fd1;
    fd = open("f1.txt",O_RDONLY,0777);
    if(fd == -1)
    {
	fprintf(stderr,"failed to open");
    }
    fd1 = open("f2.txt",O_CREAT|O_WRONLY,0777);
    char buff[20];
    printf("fd : %d\n",fd);
    printf("fd1 :%d\n",fd1);
    int ret=0;
    do{
    ret = read(fd,buff,1);
    write(fd1,buff,ret);
    }while(ret != 0);
    printf("fd : %d\n",fd);
    printf("fd1 :%d\n",fd1);
    char buffer[11]="karthikk";
    write(fd1,buffer,10);
    char h[10];
    read(fd1,h,10);
    printf("%s\n",h);
}
