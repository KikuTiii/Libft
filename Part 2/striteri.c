#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    unsigned int index;

    if(s == 0)
        return(NULL);
    index = 0;
    if ( s && f)
    {
        while(s[index])
        {
            f(index, &s[index]);
            index++;
        }
    }
}