#include "libft.h"

char * ft_strtrim(char const *s)
{
    int i = 0;
    int count = 0;
    int len = ft_strlen((char *)s);
    while (s[i])
    {
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
            count++;
        i++;        
    }
    char *str;
    str = (char *)malloc(sizeof(char) * (len - count + 1));
    if (!str)
        return NULL;
    i = 0;
    int j = 0;
    while (s[i])
    {
        if (s[i] != 32 && s[i] != '\t' && s[i] != '\n')
        {
            str[j] = s[i];
            j++;
        }
        i++;        
    }
    str[i] = '\0';
    return str;
    
}
int main()
{
    printf("%s",ft_strtrim(" hel o wo rld "));
}