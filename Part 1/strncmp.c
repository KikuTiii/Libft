int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned char	*dest1;
	unsigned char	*dest2;
	unsigned int	index;

	dest1 = (unsigned char *)s1;
	dest2 = (unsigned char *)s2;
	index = 0;
	while ((index < n) && (dest1[index] != '\0' || dest2[index] != '\0'))
	{
		if (index < n && dest1[index] != dest2[index])
		{
			return (dest1[index] - dest2[index]);
		}
		index++;
	}
	return (0);
}

// int main (void)
// {
//     unsigned int n;

//     char s1 [] = "Vai Curintia";
//     char s2 [] = "Vai curintia";

//     n = 3;
//     ft_strncmp(s1, s2, n);
//     printf("%i\n", ft_strncmp(s1, s2, n));

// }
