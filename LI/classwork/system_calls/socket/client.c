#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>

#define SERVER_IP     "127.0.0.1"
#define SERVER_PORT   5000
#define CLIENT_BUF    20

int main()
{
    int sock_fd,c_size,buffer_len;
    struct sockaddr_in server_addr;
    char client_buffer[CLIENT_BUF];


    //create a client tcp socket
   if((sock_fd = socket(AF_INET,SOCK_STREAM,0)) < 0)
   {
       printf("error : could not create socket\n");
       return 1;
   }

    //bind the network parameter

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(SERVER_PORT);
    server_addr.sin_addr.s_addr = inet_addr(SERVER_IP);

    //get the message from client
    printf("enter the message you want to sent to the server : \n");
    scanf("%[^\n]s",client_buffer);

    if(connect(sock_fd,(struct sockaddr *)&server_addr,sizeof(server_addr)) != 0)
    {
	perror("connect");
	printf("error connecting to server");
	close(sock_fd);
	return 1;
    }

    c_size = send(sock_fd,client_buffer,strlen(client_buffer) + 1 ,0);
    if(c_size > 0 )
    {
	printf("message sent to server succssefully\n");
    }
    else
    {
	printf("error : message senf\n");
    }


}
