#include <libft.h>
void ft_bzero(void *s, size_t n)
{
    if (!s)
        return ;
    size_t i = 0;
    int *arr;
    
    arr = (unsigned int*)s;
    while (i < n)
    {
        arr[i++] = 0;
    }
}
int main()
{
    int arr[5];
    size_t n = 5;
    ft_bzero(arr, n);
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    
}