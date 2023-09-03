#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
    int i = 0;
    int j = 0;
    while (dest[j])
        j++;
    while (src[i])
    {
        dest[i + j] = src[i];
        i++;
    }
    dest[i + j] = '\0';
}