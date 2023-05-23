#include "libft.h"

static char *ft_strncpy(char *dest, const char *src, size_t num)
{
    char *ptr;

    if (dest == 0 || src == 0)
        return (dest);
    ptr = dest;
    while (*src && num > 0)
    {
        *dest++ = *src++;
        num--;
    }
    while (num--)
        *dest++ = '\0';
    return (ptr);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t count;
    size_t size_s;

    if (s == NULL)
        return (0);
    size_s = ft_strlen((char *)s);
    if (start >= size_s || start - size_s <= len)
        return (ft_strdup(""));
    count = len;
    if (len < 0)
        count = size_s - start;
    if (start + count > size_s)
        count = size_s - start;
    sub = (char *)malloc(sizeof(char) * count + 1);
    if (sub == NULL)
        return (NULL);
    ft_strncpy(sub, s + start, count);
    sub[count] = 0;
    return (sub);
}

// #include<stdio.h>
// int main(void)
// {
//     char s[] = "Hello, world!";
//     char    *ret;

//     ret = ft_substr(s, 7, 5);
//     printf("%s\n", ret);
// }
