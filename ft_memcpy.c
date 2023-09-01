#include "libft.h"

void *ft_memcpy(void *dest, const void *src,   size_t n)
{
    if (!dest)
        return NULL;
    char *dst = (char *)dest;
    const char *s = (const char*)src;
    size_t i = 0;
    while (i < n)
    {
        dst[i] = s[i];
        i++;
    }
    return dst;
}
int main(){
    char dest[10];
    const char *src = "hello";
    char *d;
    d = ft_memcpy(dest, src, 5);
    printf("%s", d);
}