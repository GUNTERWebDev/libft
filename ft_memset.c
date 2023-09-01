#include <string.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    if (!s)
        return NULL;
    size_t i = 0;
    char k;
    k = (unsigned char)c;
    char *arr;
    arr = (unsigned char *)s;
    while (i < n)
       arr[i++] = k;
    
}
int main()
{
    size_t n = 5;
    char arr[5];
    ft_memset(arr, 2, n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n",i, arr[i]);
    }
    
}