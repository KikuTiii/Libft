#include <stdio.h>
#include <string.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    int            count;
    int            counter;
    const char    *temp;
    const char    *str1;
    const char    *str2;

    count = 0;
    counter = 0;
    str1 = (const char *)big;
    str2 = (const char *)little;
    while (count < len)
    {
        if (str1[count] == str2[counter])
        {
            temp = (char *) &big[count];
            while (count < len)
            {
                count++;
                if (++counter == strlen(str2))
                    return ((char *)temp);
            }
        }
        count++;
    }
    return (0);
}

// int main () {
//    const char haystack[20] = "TutorialsPoint";
//    const char needle[10] = "Point";
//    char *ret;

//    ret = strstr(haystack, needle);

//    printf("The substring is: %s\n", ret);

//    return(0);
// }