#include "libft.h"

void *ft_calloc(size_t size_elements, size_t size_bytes)
{
    size_t count;
    void *dest;

    count = size_elements * size_bytes;
    if (size_elements != 0 && count / size_elements != size_bytes)
        return (NULL);
    if (size_elements == 0 && size_bytes == 0)
        return (NULL);
    dest = malloc(count);
    if (!dest)
        return (NULL);
    ft_bzero(dest, count);
    return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main () {
//    int i, n;
//    int *a;

//    printf("Number of elements to be entered:");
//    scanf("%d",&n);

//    a = (int*)ft_calloc(n, sizeof(int));
//    printf("Enter %d numbers:\n",n);
//    for( i=0 ; i < n ; i++ ) {
//       scanf("%d",&a[i]);
//    }

//    printf("The numbers entered are: ");
//    for( i=0 ; i < n ; i++ ) {
//       printf("%d ",a[i]);
//    }
//    free( a );

//    return(0);
// }