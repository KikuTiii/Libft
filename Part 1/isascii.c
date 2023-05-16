#include <unistd.h>
#include <stdio.h>

int ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}

// int main(void)
// {
//     int c1 = 4;
//     char c2 = '~';

//     if (ft_isascii(c1))
//     {
//         printf("%d esta dentro do conjunto ASCII. \n", c1);
//     }
//     else
//     {
//         printf("%d nao esta dentro do conjunto ASCII. \n", c1);
//     }

//     if (ft_isascii(c2))
//     {
//         printf("%c esta dentro do conjunto ASCII. \n", c2);
//     }
//     else
//     {
//         printf("%c nao esta dentro do conjunto ASCII. \n", c2);
//     }
// }