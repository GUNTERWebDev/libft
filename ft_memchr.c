#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    char *arr;
    arr = (char *)s;
    unsigned char k = (unsigned char)c;
    size_t i = 0;
    if (!arr)
        return NULL;
    while (i < n)
    {
        if (arr[i] == k)
        {
            return arr + i;
        }
        i++;
    }
    return NULL;
}
int main()
{
    char arr[] = {'1', '2', '3', '4', '5'};
    char *d = ft_memchr(arr, '3', 5);
    printf("d[0] = %c\n", d[0]);
    printf("d[1] = %c", d[1]);
    printf("d[1] = %c", d[2]);
}