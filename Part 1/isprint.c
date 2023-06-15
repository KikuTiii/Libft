#include"libft.h"

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

// int main (void)
// {
//     int c1 = 'a';

//     if(ft_isprint(c1))
//     {
//         printf("%c eh um caracter printavel.", c1);
//     }
//     else
//     printf("%c nao eh um caracter printavel");
// }
