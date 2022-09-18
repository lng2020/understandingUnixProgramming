#define NRECS 16
#define NULLUT ((struct utmp*) NULL)
#define UTSIZE (sizeof(struct utmp))

int utmp_reload();
void utmp_close();
int utmp_open(char*);
struct utmp* utmp_next();