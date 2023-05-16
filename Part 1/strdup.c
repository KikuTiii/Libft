#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int count;

    count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return (count);
}

char *ft_strdup(char *src)
{
    int count;
    char *dest;

    dest = malloc(ft_strlen(src + 1));
    while (src[count] != '\0')
    {
        dest[count] = src[count];
        count++;
    }
    dest[count] = '\0';
    return (dest);
}

// int main(void)
// {
//     char src[] = "GeeksForGeeks";

//     char *target = ft_strdup(src);
//     char *target1 = strdup(src);

//     printf("%s\n", target);
//     printf("%s\n", target1);
//     return 0;
// }