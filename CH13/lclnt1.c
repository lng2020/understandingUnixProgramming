#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lclnt_funcs1.h"

void do_regular_work();

int main(int ac, char* av[])
{
    setup();
    if ( get_ticket() != 0)
        exit(0);
    
    do_regular_work();

    release_ticket();
    shut_down();

    return 0;
}

void do_regular_work()
{
    printf("SuperSleep version1.0 Running-Licensed Software\n");
    sleep(10);
}

