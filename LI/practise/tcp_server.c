#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<netinet/ip.h>
#include<arpa/inet.h>


int main()
{
    int sock_fd,data_fd,len;

    struct sockaddr_in serveraddr;
    printf("karthik is waiting : \n");
    sock_fd=socket(AF_INET,SOCK_STREAM,0);


    serveraddr.sin_family=AF_INET;
    serveraddr.sin_port=htons(5000);
    serveraddr.sin_addr.s_addr=inet_addr("127.0.0.1");

    bind(sock_fd,(struct sockaddr *)&serveraddr,sizeof(serveraddr));

    listen(sock_fd,20);

    data_fd = accept(sock_fd,(struct sockaddr *)NULL,NULL);

    char buffer[50];
    memset(buffer,0,sizeof(buffer));
    recv(data_fd,(void *)buffer,50,0);
    printf("client data : %s",buffer);

    close(sock_fd);
    close(data_fd);

}

