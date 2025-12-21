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
#define SERVER_LENGTH 10
#define SERVER_BUF    20

int main()
{
    int sock_fd,pid,data_sock_fd,buffer_len;
    struct sockaddr_in server_addr;
    char serv_buffer[SERVER_BUF];

    printf("EMERTXE : SERVER is waiting...\n");

    //create a tcp socket
    sock_fd = socket(AF_INET,SOCK_STREAM,0);

    //bind the network parameter

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(SERVER_PORT);
    server_addr.sin_addr.s_addr = inet_addr(SERVER_IP);

    bind(sock_fd,(struct sockaddr *)&server_addr,sizeof(server_addr));

    //backlog or fix size queueu
    listen(sock_fd,SERVER_LENGTH);
    while(1)
    {
	//if there are any, accept and create a new data socket

	data_sock_fd = accept(sock_fd,(struct sockaddr *)NULL,NULL);
	pid = fork();
	if(pid  == 0)
	{
	    memset(serv_buffer,0,sizeof(serv_buffer));

	    //try to get some actual data from client
	    recv(data_sock_fd,(void *)serv_buffer,SERVER_BUF,0);

	    printf("this is the client data : %s\n",serv_buffer);
	    //close the sockets now
	    close(sock_fd);
	    exit(0);
	}
    }
    close(data_sock_fd);


}
