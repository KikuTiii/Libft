#include"libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			count;
	unsigned char	*src;

	count = 0;
	src = (unsigned char *)str;
	while (count < n)
	{
		if (src[count] == (unsigned char)c)
			return (&src[count]);
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
