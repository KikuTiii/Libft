#include "libft.h"

int	ft_atoi(char *str)
{
    int number;
    int count;
    int sign;

    number = 0;
    sign = 1;
    count = 0;
    if(str[count] == ' ' || (str[count] >= '\t' && str[count] <= '\r'))
        count++;
    if(str[count] == '-' || str[count] == '+')
    {
        if (str[count] == '-')
        {
            sign = sign * - 1;
            count++;
        }
    }
    while(str[count] >= '0' && str[count] <= '9')
    {
        number = number * 10;
        number = number + (str[count] - '0');
        count++;
    }
    return(number * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main () 
// {
//    int val;
//    char str[30];

//    strcpy(str, "-2147483648");
//    val = ft_atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val);
//    strcpy(str, "abcdefghijklmnopqrstuvwxyz");
//    val = ft_atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val);
//    return(0);
// }