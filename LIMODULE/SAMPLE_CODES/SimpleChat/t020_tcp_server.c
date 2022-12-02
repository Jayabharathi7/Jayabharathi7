/*------------------------------------------------------------------------------ 
 *
 *   Author         : Emertxe (http://www.emertxe.com) 
 *   Date           : Tue 01 Mar 2016 16:18:10 IST
 *   File           : t020.c
 *   Title          : IPC mechanism - Usage of TCP socket - Server
 *   Description    : Sockets offer interfaces with TCP/IP stack inside Linux 
 *                    Kernel, using which remote connections can be established
 *                    over a network. This program demonstrates various steps
 *                    to establish successful three-way handshake as a server. 
 *
 *----------------------------------------------------------------------------*/
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>

#define SERVER_IP       "127.0.0.1"
#define SERVER_PORT 	5000
#define SERVER_LENGTH 	10
#define SERVER_BUFF	20

void *send_func(void *data) {
    int sock_fd = (int)(long)data;
    char buf[SERVER_BUFF];
    int c_size;

    while(1) {
	gets(buf);
	/* Send the message to server */
	c_size = send(sock_fd, (void *)&buf, strlen(buf) + 1, 0);
	if(c_size <= 0) {
	    printf("Error: Unable to send Message\n");
	    break;
	}
    }
}

int main() {
    int sock_fd, data_sock_fd,buffer_len;
    struct sockaddr_in serv_addr; 
    char serv_buffer[SERVER_BUFF];
    pthread_t send_tid;

    printf("Jayakumar: Server is waiting...\n");

    /* Create a TCP socket */
    sock_fd = socket(AF_INET, SOCK_STREAM, 0);

    /* Bind it to a particular IP address & port) */
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = inet_addr(SERVER_IP);
    serv_addr.sin_port = htons(SERVER_PORT); 

    bind(sock_fd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)); 

    /* Wait and listen for incoming connections */
    listen(sock_fd, SERVER_LENGTH);

    /* If there are any, accept and create a new data socket */
    data_sock_fd = accept(sock_fd, (struct sockaddr*)NULL, NULL); 

    //Create a thread for sending data
    pthread_create(&send_tid, NULL, send_func, (void*)(long)data_sock_fd);

    while(1) {
	/* Try to get some actual data from client */
	if(recv(data_sock_fd, (void *) serv_buffer,SERVER_BUFF,0) <= 0) {
	    perror("recv");
	    break;
	}

	if(strcmp(serv_buffer, "exit") == 0) {
	    puts("Exitting due to client request");
	    pthread_cancel(send_tid);
	    break;
	}

	/* Print the data received from client */
	printf("%s\n",serv_buffer);
    }

    /* Close the sockets now */
    close(data_sock_fd);
    close(sock_fd);
}
