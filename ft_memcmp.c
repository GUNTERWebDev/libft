#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i = 0;
    unsigned char *c1;
    unsigned char *c2;
    c1 = (unsigned char *)s1;
    c2 = (unsigned char *)s2;
    while ((c1[i] || c2[i]) && i < n)
    {
        if (c1[i] > c2[i])
            return 1;
        else if (c1[i] < c2[i])
            return -1;
        i++;
    }
    return 0;
}
#include <string.h>
int main()
{
    char s1[] = "hello";
    char s2[] = "hello";
    printf("%d\n", ft_memcmp(s1, s2, 3));
    printf("%d", memcmp(s1, s2, 3));
}