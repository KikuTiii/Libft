#include "libft.h"

int ft_count(char const *s, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		i++;
	}
	return (count);
}

char *ft_strndup(const char *src, size_t n)
{
	unsigned int index;
	char *dest;

	if (src == 0)
		return (NULL);
	index = 0;
	dest = malloc(ft_strlen((char *)src) + 1);
	if (dest == 0)
		return (0);
	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char **ft_split(char const *s, char c)
{
	int i;
	int count;
	int size;
	char **tab;

	if (s == 0)
		return (NULL);
	i = 0;
	count = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_count(s, c)) + 1);
	if (tab == 0)
		return (NULL);
	while(s[count] != '\0')
	{
		while(s[count] == c)
			count++;
			size = count;
		while(s[count] && s[count] != c)
			count++;
		if(count > size)
			tab[i++] = ft_strndup(s + size, count - size);
	}
	tab[i] = '\0';
	return(tab);
}

// #include<stdio.h>
// int	main(void)
// {
// 	char s[] = "****Kikutz***Leon***Nathan***";
// 	char c = '*';
// 	char **ret;
// 	size_t index;

// 	index = 0;
// 	ret = ft_split(s, c);
// 	while (ret[index] != 0)
// 		printf("%s ", ret[index++]);
// 	return (0);
// }