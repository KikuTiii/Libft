#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *str, int c)
{
    int count;
    char *str2;
    char *temp;

    count = 0;
    str2 = (char *)str;
    while (str2[count] != '\0')
    {
        if (str2[count] == c)
        {
            return ((char *)&str2[count]);
        }
        count++;
    }
    if (str2[count] == c)
        return ((char *)&str2[count]);
    return (0);
}

// int main(void)
// {
//     const char str[] = "test test test";
//     const char c = 's';
//     char *ret = ft_strchr(str, c);

//     printf("%s\n", ret);
// }