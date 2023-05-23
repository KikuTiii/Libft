#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;

    if (!lst || !f || !del)
        return (NULL);
    new = ft_lstnew(f(lst->content));
    if(new)
    {
        new->next = ft_lstmap(lst->next,f,del);
        return(new);
    }
    else
        ft_lstclear(&new, del);
        return(NULL);
}
