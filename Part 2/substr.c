#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t count;
    char *str;
    size_t temp;

    if(s == 0)
        return(NULL);    
    count = 0;
    temp = ft_strlen((char *)s);
    str = (char *)malloc(sizeof(char) * len + 1);
    if(str == 0)
        return(NULL);
    if(start >= temp || start - temp <= len)
        return("");
    while(count < len)
    {
        str[count] = s[start + count];
        count++;
    }
    str[count] = '\0';
    return(str);
}

// #include<stdio.h>
// int main(void)
// {
//     char s[] = "Hello, world!";
//     char    *ret;

//     ret = ft_substr(s, 7, 5);
//     printf("%s\n", ret);
// }