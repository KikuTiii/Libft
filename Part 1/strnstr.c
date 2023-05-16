#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t count;
    size_t len_little;

    count = 0;
    len_little = ft_strlen((char *)little);
    if (len_little == 0)
        return ((char *)big);
    while (count < len && big[count] != 0 && len - count >= len_little)
    {
        if (big[count] == little[0])
        {
            if (ft_strncmp((char *)big + count,
                           (char *)little, len_little) == 0)
                return ((char *)big + count);
        }
        count++;
    }
    return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    const char big[] = "TutorialsPointClick";

    printf("The substring is: %s\n", ft_strnstr(big, "t", 3));      // torialsPointClick
    printf("The substring is: %s\n", ft_strnstr(big, "Point", 14)); // PointClick
    printf("The substring is: %s\n", ft_strnstr(big, "Point", 3));  // (null)
    printf("The substring is: %s\n", ft_strnstr(big, "Point", 10)); // (null)

    return (0);
}