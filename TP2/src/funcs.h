#define SERVER_PORT 21
#define STR_LEN 256

struct urlArgs{
    char user[STR_LEN];
    char password[STR_LEN];
    char host[STR_LEN];
    char path[STR_LEN];
    char filename[STR_LEN];
};

int getIP(char *hostName,char *IP);
int openSocket(char *address, int *fd);
int getArgsFromUrl(char *url, struct urlArgs *args);