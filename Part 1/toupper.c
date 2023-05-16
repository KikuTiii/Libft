#include <stdio.h>
#include <unistd.h>

int ft_toupper(int ch)
{
    if(ch >= 97 && ch <= 122)
    {
        return(ch + 32);
    }
    else if(ch >= 65 && ch <= 90)
    {
        return(ch);
    }
    else
    {
        return(0);
    }
}