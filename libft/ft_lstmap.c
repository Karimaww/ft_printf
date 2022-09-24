#include "libft.h"

t_list  *ft_lstmap(t_list *lst, t_list *(f)(t_list *elem))
{
    t_list  *tmp;
    t_list  *el;
    t_list  *list;

    list = NULL;
    tmp = lst;
    while (tmp)
    {
        el =(t_list *)malloc(sizeof(t_list));
        if (!el)
            return (NULL);
        el = f(tmp);
        ft_lstadd(&list, el);
        tmp = tmp->next;
    }
    return (list);
}