#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

// Function declaration


int main() {
    // Open a file for writing (you can change the filename and mode as needed)
    int fd = open("file.txt", O_WRONLY, 0644);
}
