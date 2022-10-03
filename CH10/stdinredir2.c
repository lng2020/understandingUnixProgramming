#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define CLOSE_DUP

int main()
{
    int fd;
    int newfd;
    char line[100];

    fget(line, 100, stdin); printf("%s", line);
    fget(line, 100, stdin); printf("%s", line);
    fget(line, 100, stdin); printf("%s", line);

    fd = open("data", O_RDONLY);
#ifdef CLOSE_DUP
    close(0);
    newfd = dup(fd);
#else
    newfd = dup2(fd, 0);
#endif 
    if ( newfd != 0){
        fprintf(stderr, "Could not duplication fd to 0\n");
        exit(1);
    }
    close(fd);

    fget(line, 100, stdin); printf("%s", line);
    fget(line, 100, stdin); printf("%s", line);
    fget(line, 100, stdin); printf("%s", line);

    return 0;
}