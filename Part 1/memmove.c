#include"libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char		*dest1;
	const char	*dest2;
	size_t		index;

	index = 0;
	dest1 = (char *)str1;
	dest2 = (const char *)str2;
	if (str1 == 0 && str2 == 0)
		return (str1);
	if (dest1 > dest2)
	{
		while (n--)
		{
			dest1[n] = dest2[n];
		}
	}
	else
	{
		while (index < n)
		{
			dest1[index] = dest2[index];
			index++;
		}
	}
	return (str1);
}

// int main () {
//    const char haystack[20] = "TutorialsPoint";
//    const char needle[10] = "Point";
//    char *ret;

//    ret = strstr(haystack, needle);

//    printf("The substring is: %s\n", ret);

//    return(0);
// }
