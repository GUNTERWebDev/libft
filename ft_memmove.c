#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    if (!dest || !src)
        return NULL;
    char *dst = (char *)dest;
    char* s =  (char*)src;
    size_t i = 0;
    if (dst <= s)
    {
        while (s[i] && i < n)
        {
            dst[i] = s[i];
            i++;
        }
        
    }
    else if (dst > s)
    {
        size_t k = n;
        dst += n - 1;
        s += n - 1;
        while (n)
        {
            *dst-- = *s--;
            
            n--;
        }
        
    }
    return dest;
}
int main()
{
    char dest[10];
    const char *src = "helloncccgchfh";
    char *d;
    d = ft_memmove(dest, src, 10);
    printf("%s", d);
}