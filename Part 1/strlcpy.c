#include"libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	count;
	unsigned int	len1;

	count = 0;
	len1 = ft_strlen(src);
	if (size > 0)
	{
		while (count < size - 1 && src[count] != 0)
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = 0;
	}
	return (len1);
}
