#include"libft.h"

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int count;
    unsigned int t_src;
    unsigned int t_dest;

    count = 0;
    t_src = ft_strlen(src);
    t_dest = ft_strlen(dest);
    if (size > 0)
    {
        while(count < size - 1 && src[count] != '\0')
        {
            dest[count] = src[count];
            count++;
        }
        dest[count] = '\0';
        return(t_src);
    }
}
