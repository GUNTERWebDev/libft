#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t i = 0;
    int j = 0;
    while (dest[j])
        j++;
    while (src[i] && i < n)
    {
        dest[i + j] = src[i];
        i++;
    }
    dest[i + j] = '\0';
}