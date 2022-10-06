#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#define oops(msg) { perror(msg); exit(1);}
#define h_addr h_addr_list[0] /* for backward compatibility */
#define PORTNUM 15000

int main(int ac, char* av[])
{
    struct sockaddr_in servadd;
    struct hostent* hp;
    int sock_id, sock_fd;
    char buffer[BUFSIZ];
    int n_read;

    return 0;
}