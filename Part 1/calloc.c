#include"libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;
	size_t	number;

	number = nitems * size;
	if (nitems == 0 || size == 0)
		return (malloc(0));
	if (number / nitems != size)
		return (NULL);
	ptr = malloc(number);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, number);
	return (ptr);
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
