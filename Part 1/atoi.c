#include"libft.h"

int	ft_atoi(const char *str)
{
	int	numb;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	numb = 0;
	while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
	i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numb = numb * 10;
		numb = numb + (str[i] - '0');
		i++;
	}
	return (numb * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main () 
// {
//    int val;
//    char str[30];

//    strcpy(str, "-2147483648");
//    val = ft_atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val);
//    strcpy(str, "abcdefghijklmnopqrstuvwxyz");
//    val = ft_atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val);
//    return(0);
// }
