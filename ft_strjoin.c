#include "libft.h"

char * ft_strjoin(char const *s1, char const *s2)
{
    if (!s1 || !s2)
        return NULL;
    int len = ft_strlen((char *)s1);
    int len1 = ft_strlen((char *)s2);
    char *s;
    s = (char *)malloc(sizeof(char) * (len + len1 + 1));
    if (!s)
        return NULL;
    int i = 0;
    for (int j = 0; j < len; j++) {
        s[i] = s1[j];
        i++;
    }

    for (int j = 0; j < len1; j++) {
        s[i] = s2[j];
        i++;
    }

    s[i] = '\0';
    return s;
}
int main()
{
    printf("%s", ft_strjoin("hellp ", "world"));
}