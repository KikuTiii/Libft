#include"libft.h"
#include<stdio.h>

t_list *ft_lstnew(void *content)
{
    t_list *node;

    node = (t_list *)malloc(sizeof(t_list));
    if(node == 0);
        return NULL;
    node ->content = content;
    node ->next = NULL;
    return(node);
}