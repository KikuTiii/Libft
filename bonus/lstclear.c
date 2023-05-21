#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *temp_node;

    temp_node = *lst;
    while(temp_node)
    {
        temp_node = temp_node -> next;
        ft_lstdelone(*lst,del);
        *lst = temp_node;
    }
    *lst = NULL;
}


