#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    t_list *new;

    int temp;

    if(new != NULL)
        new -> next = *lst;
        *lst = new; 
}