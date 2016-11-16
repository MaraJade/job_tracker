#define _POSIX_C_SOURCE 200809L
#define _XOPEN_SOURCE
#define _POSIX_SOURCE
#include <signal.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include <fcntl.h>
#include <netdb.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <sys/unistd.h>
#include <sys/wait.h>
#include <sys/select.h>

//#define DEBUG

//Macro for debugging: all debug statements use this
#if (defined(DEBUG))
#define debug(statement)  \
  do{                     \
  statement;              \
  } while(0)              
#else
#define debug(statement)  \
  do {;} while(0)         
#endif

int main(int argc, char **argv){

  return 0;
}
