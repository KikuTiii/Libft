#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int length;
    char *dest;
    unsigned int count;

    if (s == 0)
        return NULL;
    length = ft_strlen(s);
    dest = (char *)malloc(sizeof(char) * length + 1);
    if (dest == 0)
        return (NULL);
    count = 0;
    while (count < length)
    {
        dest = f(count, s[count]);
        count++;
    }
    dest[count] = '\0';
    return (dest);
}
