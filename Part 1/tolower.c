#include <unistd.h>
#include <stdio.h>

int ft_tolower(int ch)
{
    if (ch >= 65 && ch <= 90)
    {
        return (ch - 32);
    }
    else if (ch >= 97 && ch <= 122)
    {
        return (ch);
    }
    else
    {
        return (0);
    }
}