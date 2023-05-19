#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
     t_list *node;

     if(*lst == NULL)
     {
        *lst = new;
        return;
     }
    node = *lst;
    while(node->next != NULL)
        node = node->next;
    node->next = new; 
}