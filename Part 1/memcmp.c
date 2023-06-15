#include"libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			count;
	unsigned char	*dest1;
	unsigned char	*dest2;

	dest1 = (unsigned char *)str1;
	dest2 = (unsigned char *)str2;
	count = 0;
	while (count < n)
	{
		if (dest1[count] != dest2[count])
			return (dest1[count] - dest2[count]);
		count++;
	}
	return (0);
}

// int main()
// {
//     char str1[15];
//     char str2[15];
//     int ret;

//     memcpy(str1, "ABCDEF", 6);
//     memcpy(str2, "abcdef", 6);

//     ret = ft_memcmp(str1, str2, 5);

//     if (ret > 0)
//     {
//         printf("str2 is less than str1");
//     }
//     else if (ret < 0)
//     {
//         printf("str1 is less than str2");
//     }
//     else
//     {
//         printf("str1 is equal to str2");
//     }

//     return (0);
// }
