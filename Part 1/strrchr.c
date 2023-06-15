#include"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		count;
	char	*s;

	s = (char *) str;
	count = ft_strlen(s);
	while (count >= 0)
	{
		if (s[count] == (unsigned char)c)
			return (&s[count]);
		count--;
	}
	return (0);
}
    
// int main(void)
// {
//     const char str[] = "computer program";
//     const char c = 'p';
//     char *ret = ft_strrchr(str, c);

//     printf("%s\n", ret);
// }
