#include <stdio.h>
#include "libft.h"


int _strlen(char *s, char c)
{
    int i = 0;
    int count = 0;
    while (*s == c)
    {
        s += 1;
    }
    i = 0;
    while (s[i])
    {
        if (s[i] == c && s[i + 1] != c)
            count++;
        i++;
    }
    return count;
}
int _strchar(char *s,char c)
{
    int i = 0;
    while (*s == c)
    {    
      s += 1;
    }
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            break;
        i++;
    }
    return i;
}
char ** ft_strsplit(char const *s, char c)
{
    int words_len = _strlen((char *)s, c);
    char **arr;
    arr = malloc(sizeof(char *) * words_len);
    if (!arr)
        return NULL;
    int i = 0;
    int j = 0;
    int k = 0;
    while (s[i])
    {
        int len = _strchar((char *)s + i,c);
        while (s[i] == c)
            i++;
        if (len == 0)
            break;
        arr[k] = malloc(sizeof(char) * (len + 1));
        while (s[i] != c)
        {
            arr[k][j] = s[i];
            i++;
            j++;
        }
       if (s[i] == c)
        {
            arr[k][j] = '\0';
            k++;
            j = 0;
        }
        i++;
    }
    return arr;
}
int main()
{
    char **arr;
    arr = ft_strsplit("*****hello****students*******", '*');
    for (int i = 0;i < 2;i++)
        printf("%s\n", arr[i]);
    printf("%d", '1' + '1');
}