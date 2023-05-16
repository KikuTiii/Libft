#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    char *str;
    int size;

    if (s1 == 0 || set == 0)
        return (NULL);
    start = 0;
    while (s1[start] != '\0' && ft_strchr(set,s1[start]))
        start++;
    end = ft_strlen((char *)s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
    size = start - end + 1;
    str = (char *)malloc(sizeof(char) * (size));
    if (str == 0)
        return (NULL);
    ft_strlcpy(str, (char *)(s1 + start),size);
	return (str);
}

