#include "libft.h"

void ft_putstr_fd(char const *s, int fd)
{
    int i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}
int main()
{
    int fd = open("file.txt", O_WRONLY, 0644);
    if (fd == -1)
        return -1;
    const char str[] = "hellp";
    ft_putstr_fd(str, fd);
    close(fd);
}