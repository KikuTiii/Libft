#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int count;

    count = 0;
    while(s[count])
    {
        write(fd,&*s,1);
        count++;
    }
}