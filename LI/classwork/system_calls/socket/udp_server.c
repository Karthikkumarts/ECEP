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
#define SERVER_PORT   5001
#define SERVER_LENGTH 10
#define SERVER_BUF    20

int main()
{
    int sock_fd,data_sock_fd,buffer_len,client_length;
    struct sockaddr_in server_addr;
    struct sockaddr_in client_addr;
    char serv_buffer[SERVER_BUF];

    printf("EMERTXE : SERVER is waiting...\n");

    //create a tcp socket
    sock_fd = socket(AF_INET,SOCK_DGRAM,0);

    //bind the network parameter

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(SERVER_PORT);
    server_addr.sin_addr.s_addr = inet_addr(SERVER_IP);

    bind(sock_fd,(struct sockaddr *)&server_addr,sizeof(server_addr));


    client_length = sizeof(struct sockaddr_in);

    recvfrom(sock_fd,(void *)serv_buffer,SERVER_BUF,0,(struct sockaddr *)&client_addr,&client_length);

    printf("this is the client data : %s\n",serv_buffer);
    printf("SENDER IP : %s\n",inet_ntoa(client_addr.sin_addr));
    printf("SENDER PORT : %d\n",ntohs(client_addr.sin_port));
    //close the sockets now
    close(sock_fd);


}
