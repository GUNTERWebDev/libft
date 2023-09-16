#include "libft.h"
void ft_putendl_fd(char const *s, int fd)
{
    int i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    ft_putchar('\n');
}