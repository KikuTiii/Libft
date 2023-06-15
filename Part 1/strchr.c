char	*ft_strchr(const char *str, int c)
{
	int		count;
	char	*s;

	count = 0;
	s = (char *)str;
	while (s[count])
	{
		if (s[count] == (unsigned char)c)
			return (&s[count]);
		count++;
	}
	if (s[count] == (unsigned char)c)
		return (&s[count]);
	return (0);
}
// int main(void)
// {
//     const char str[] = "test test test";
//     const char c = 's';
//     char *ret = ft_strchr(str, c);

//     printf("%s\n", ret);
// }
