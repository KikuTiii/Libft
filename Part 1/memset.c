#include"libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	size_t	index;
	char	*src;

	index = 0;
	src = (char *)str;
	while (index < size)
	{
		src[index] = c;
		index++;
	}
	return (src);
}


// #include <string.h>

// int main ()
// {
//    char str[50];

//    strcpy(str,"Matheus");
//    puts(str);

//    ft_memset(str,'$',3);
//    puts(str);
   
//    return(0);
// }
