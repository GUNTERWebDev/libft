#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2", 2);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
        n += '0';
        write(fd, &n, 1);
    }
}
int main()
{
    int fd = open("file.txt", O_WRONLY, 0644);
    if (fd == -1)
        return -1;
    int str = 1933465527;
    ft_putnbr_fd(str, fd);
    close(fd);
}