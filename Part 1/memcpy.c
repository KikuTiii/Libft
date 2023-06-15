#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*dest1;
	char	*src1;

	count = 0;
	dest1 = (char *)dest;
	src1 = (char *)src;
	if (dest == 0 && src == 0)
		return (dest);
	while (count < n)
	{
		dest1[count] = src1[count];
		count++;
	}
	return (dest);
}

// int    main(void)
// {
//     char    src[] = "banana";
//     char    dest[] = "carro1";

//     printf("Before memcpy dest = %s\n", dest);
//     ft_memcpy(dest, src, ft_strlen(src + 1));
//     printf("After memcpy dest = %s\n", dest);
//     return (0);
// }
