#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i = 0;
    char k = (char)c;
    while (s[i])
    {
        if (s[i] == k)
            return s + i;
    }
    return NULL;
}