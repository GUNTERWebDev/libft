#include "libft.h"

char *strchr(const char *s, int c)
{
    int i = 0;
    char k = (char)c;
    while (s[i])
    {
        if (s[i] == k)
            return k;
        i++;
    }
    return NULL;
}