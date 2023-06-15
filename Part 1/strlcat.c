#include"libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned char	count;
	unsigned char	len_src;
	unsigned char	len_dest;

	if (size == 0 && dest == 0)
		return (0);
	count = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size > len_dest)
	{
		while (src[count] != 0 && count + len_dest < size -1)
		{
			dest[count + len_dest] = src[count];
			count++;
		}
		dest[count + len_dest] = 0;
		return (len_src + len_dest);
	}
	return (len_src + size);
}

// #include <stdio.h>
// #include <string.h>

// unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

// int				main(void)
// {
// 	char			dest[50] = "Humberto ";
// 	char			src[50] = "Lindo";
// 	unsigned int	size;

// 	size = 15;
// 	//printf("%lu\n", ft_strlcat(dest, src, size));
//     printf("%d\n", ft_strlcat(dest, src, size));
// 	printf("dest: %s\n", dest, src);
// }
