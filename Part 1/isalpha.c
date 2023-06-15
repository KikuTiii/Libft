#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// int main(void)
// {
//     char c1 = 'v';
//     char c2 = '~';

//     if (ft_isalpha(c1))
//     {
//         printf("%c eh uma letra. \n", c1);
//     }
//     else
//     {
//         printf("%c nao eh uma letra seu animal. \n", c1);
//     }

//     if (ft_isalpha(c2))
//     {
//         printf("%c eh uma letra. \n", c2);
//     }
//     else
//     {
//         printf("%c nao eh uma letra seu animal. \n", c2);
//     }
// }
