#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *str, int c)
{
    int count;
    char *str2;
    char size;

    str2 = (char *)str;
    size = strlen(str2);
    while (size != 0)
    {
        if (str2[size] == c)
        {
            return ((char *) &str2[size]);
        }
        size--;
    }
    if (str2[size] == c)
        return ((char *)&str2[size]);
    return (0);
}
    
// int main(void)
// {
//     const char str[] = "computer program";
//     const char c = 'p';
//     char *ret = ft_strrchr(str, c);

//     printf("%s\n", ret);
// }