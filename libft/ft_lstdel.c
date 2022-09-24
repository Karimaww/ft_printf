#include "libft.h"

void    ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list  *el;

    el = *alst;
    while (el)
    {
        ft_lstdelone(&el, del);
        el = el->next;
    }
    *alst = NULL;
}