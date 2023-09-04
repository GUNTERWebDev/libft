#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *str;
    str = (char *)malloc(sizeof(char) * len);
    if (!str)
        return NULL;
    unsigned int i = start;
    unsigned int j = 0;
    
    while (j < len)
    {
        str[j] = s[i];
        j++;
        i++;
    }
    return str;
}
int main()
{
    char s[] = "hello world";
    printf("%s", ft_strsub(s, 6, 5));
}