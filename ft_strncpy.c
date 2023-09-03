#include "libft.h"

char *ft_stpncpy(char *restrict s1, const char *restrict s2, size_t n)
{
    char *c1 = (char *)s1;
    char *c2 = (char *)s2;

    size_t i = 0;
    while (c2[i] && i < n)
    {
        c1[i] = c2[i];
        i++;
    }
    return c1;
}
