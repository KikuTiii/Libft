#include"libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    int count;
    char *t_dest;
    char *t_src;

    t_dest = (char *)dest;
    t_src = (char *)src;
    count = 0;
    while (count < n)
    {
        t_dest[count] = t_src[count];
        count++;
    }
    return (dest);
}

// int    main(void)
// {
//     char    src[] = "banana";
//     char    dest[] = "carro1";

//     printf("Before memcpy dest = %s\n", dest);
//     ft_memcpy(dest, src, ft_strlen(src + 1));
//     printf("After memcpy dest = %s\n", dest);
//     return (0);
// }