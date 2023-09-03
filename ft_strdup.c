#include "libft.h"

char *ft_strdup(const char *s)
{
    char *dst;

    char *a = (char *)s;
    int  i = 0;
    while (a[i])
        i++;
    dst = (char *)malloc(sizeof(char) * (i + 1));
    i = 0;
    while (a[i])
    {
        dst[i] = a[i];
        i++;
    }
    return dst;
}
int main(){
    char src[] = "hello";
    char *dest;
    dest = ft_strdup(src);
    printf("%s", dest);
}