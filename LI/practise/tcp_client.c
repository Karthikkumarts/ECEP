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
    int sock_fd,data_fd,len,c_size;

    char buffer[50];
    struct sockaddr_in serveraddr;
    sock_fd=socket(AF_INET,SOCK_STREAM,0);

     printf("enter the client data:");
     scanf("%[^\n]s",buffer);

    serveraddr.sin_family=AF_INET;
    serveraddr.sin_port=htons(5000);
    serveraddr.sin_addr.s_addr=inet_addr("127.0.0.1");


     connect(sock_fd,(struct sockaddr *)&serveraddr,sizeof(serveraddr));

    c_size = send(sock_fd,(void *)buffer,20 + 1,0);
    if(c_size > 0)
    {
	printf("message sent successfully\n");
    }
    else
	printf("message not sent successfully\n");
}

