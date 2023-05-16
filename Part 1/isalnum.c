#include <unistd.h>
#include <stdio.h>

int ft_isalnum(int c)
{
    if ((c >= 0 && c <= 9) || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    else
        return (0);
}

// int main(void)
// {
//     int c1 = 'a';
//     int c2 = 3;

//     if (ft_isalnum(c1 && c2))
//     {
//         printf("%c eh um digito alfabetico. \n", c1);
//         printf("%d eh um digito numerico. \n", c2);
//     }
//     else
//     {
//         printf("%c nao eh um digito alfabetico. \n", c1);
//         printf("%d nao eh um digito numerico. \n", c2);
//     }
// }