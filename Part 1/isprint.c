#include <unistd.h>
#include <stdio.h>

int ft_isprint(int ch)
{
    if(!(ch >= 32 && ch <= 126))
    {
        return(0);
    }
    else
    return(1);
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