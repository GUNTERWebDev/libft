#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    int i = 0;
    int j;
    char *hay = (char *)haystack;
    char *need = (char *)needle;
    while (hay[i])
    {
        j = 0;
        while (hay[j])
        {
            if (hay[i] == need[j])
            {
                if (need[j] == '\0')
                    return hay + i - j;
                i++;
            }
            else
                break;
            j++;
        }
        i = i - j + 1;
    }
    return hay;
}
int main()
{
    char s1[] = "aaab";
    char s2[] = "aab";
    printf("%s", ft_strstr(s1, s2));
}