#include <unistd.h>
#include <stdio.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] < s2[i] && i < n)
        return(s1[i] - s2[i]);
        else if(s1[i] > s2[i])
        {
            return(s1[i] - s2[i]);
        }
        i++;
    }
    return(0);
}

// int main (void)
// {
//     unsigned int n;

//     char s1 [] = "Vai Curintia";
//     char s2 [] = "Vai curintia";

//     n = 3;
//     ft_strncmp(s1, s2, n);
//     printf("%i\n", ft_strncmp(s1, s2, n));

// }