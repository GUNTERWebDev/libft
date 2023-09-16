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

    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    char character = 'A'; // Change this to the character you want to write

    // Call ft_putchar_fd to write the character to the file descriptor
    ft_putchar_fd(character, fd);

    // Close the file descriptor
    close(fd);

    printf("Character '%c' has been written to the file.\n", character);

    return 0;
}
