#include <unistd.h>
#include <stdio.h>

int ft_isdigit(int c)
{
    if (c >= 0 && c <= 9)
    {
        return (1);
    }
    else
        return (0);
}

// int main(void)
// {
//     int c1 = 7;
//     int c2 = '~';

//     if (ft_isdigit(c1))
//     {
//         printf("%d de fato eh um digito numerico \n.", c1);
//     }
//     else
//         printf("%d nao eh um digito numerico fdp \n", c1);

//     if (ft_isdigit(c2))
//     {
//         printf("%d de fato eh um digito numerico \n", c2);
//     }
//     else
//         printf("%d nao eh um digito numerico fdp", c2);
// }