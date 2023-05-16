#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int size_s1;
    int size_s2;
    char *dest;

    if (s1 == 0 || s2 == 0)
        return (NULL);
    size_s1 = ft_strlen((char *)s1);
    size_s2 = ft_strlen((char *)s2);
    dest = malloc(sizeof(char) * size_s1 + size_s2 + 1);
    if (dest == 0)
        return (NULL);
    ft_memcpy(dest, s1, size_s1);
    ft_memcpy(dest + size_s1, s2, size_s2 + 1);
    return (dest);
}

// #include <stdio.h>
// int main(void)
// {
//     char s1[] = "Leon ";
//     char s2[] = "da Luz";

//     printf("%s\n", ft_strjoin(s1, s2));
// }