#include "libft.h"

#include <stdio.h>

int ft_len(int n)
{
    int i = 0;
    if (n < 0)
        i++;
    while (n > 0)
    {
        n /= 10;
        i++;
    }
    return i;
}
void rev_string(char *s, int j)
{
    int    i;
    int    len;
    char    tmp;

    len = 0;
    i = 0;
    while (len < j)
        len++;
    while (i < len / 2)
    {
        tmp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = tmp;
        i++;
    }
}
char * ft_itoa(int n)
{
    int len = ft_len(n);
    char *s;
    s = (char *)malloc(sizeof(char) * (len + 1));
    if (!s)
        return NULL;
    int i = 0;
    while (n > 0)
    {
        s[i] = (n % 10) + 48;
        i++;
        n /= 10;
    }
    rev_string(s, len);
    s[i] = '\0';
    return s;   
}
int main()
{
    printf("%s", ft_itoa(4234));
}