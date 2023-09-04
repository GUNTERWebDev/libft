#include "libft.h"

char * ft_strnew(size_t size)
{
    char *s;
    s = (char *)malloc(sizeof(char) * (size + 1));
    if (!s)
        return NULL;
    *s = 0;
    return s;
}