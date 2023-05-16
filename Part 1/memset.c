#include <stdio.h>
#include <stdlib.h>

void *ft_memset(void *ptr, int c, size_t n)
{
    int count;
    char *set;

    set = (char *)ptr;
    count = 0;
    while (count < n)
    {
        set[count] = c;
        count++;
    }
    return (set);
}

// #include <string.h>

// int main ()
// {
//    char str[50];

//    strcpy(str,"Matheus");
//    puts(str);

//    ft_memset(str,'$',3);
//    puts(str);
   
//    return(0);
// }