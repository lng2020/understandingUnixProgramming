#include <netinet/in.h>
#define RECLAIM_INTERVAL 60
int setup();
void free_all_tickets();
void shut_down();
void handle_request(char*, struct sockaddr_in*, socklen_t);
char* do_hello(char*);
char* do_goodbye(char*);
void narrate(char*, char*, struct sockaddr_in*);