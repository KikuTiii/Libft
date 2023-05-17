#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char i;

    if (n < 0)
    {
        write(fd, "-", 1);
        i = (n % 10) * -1 + '0';
    }
    else
        i = (n % 10) + '0';
    n = n / 10;
    if (n < 1)
        n = n * -1;
    if (n != 0)
        ft_putnbr(n);
    write(fd, &i, 1);
}