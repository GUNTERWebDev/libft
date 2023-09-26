#ifndef GET_NEXT_LINE
#define GET_NEXT_LINE

# define BUFF_SIZE 1
# define FD_SIZE 4096
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <fcntl.h>
int get_next_line(const int fd, char **line);

#endif