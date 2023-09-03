#include "libft.h"

char *ft_strcpy(char *restrict dst, const char *restrict src)
{
    char *dest = (char *)dst;
    char *s = (char *)src;
    int i = 0;
    while (s[i])
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
    
}
int main()
{
    char dest[10];
    char *src = "hellp";
    printf("%s", ft_strcpy(dest, src));

}