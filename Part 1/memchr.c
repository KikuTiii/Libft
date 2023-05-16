#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    int count;
    char *set;

    set = (char *)str;
    count = 0;
    while (count < n)
    {
        if (set[count] == c)
        {
            return ((char *)&set[count]);
        }
        count++;
    }
    return (0);
}

// int main(void)
// {
//     char str[] = "test test";
//     char c = 's';

//     ft_memchr(str, c, strlen(str) + 1);
//     printf("The char |%c| was found in: %s \n", c, str);
//     return (0);
// }