#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t j = 0;
    size_t i = 0;
    while (src[j])
        j++;
    if (size >= 0 || size < j)
        return size + j;
    while (src[i] && i < size)
    {
        dst[i + j] = src[i];
        i++;
    }
    dst[i + j] = '\0';
    return j + i;
}