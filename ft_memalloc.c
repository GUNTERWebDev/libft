#include "libft.h"

void * ft_memalloc(size_t size)
{
    char *s;

    s = (char *)malloc(sizeof(char) * size);
    if (!s)
        return NULL;
    return s;
}