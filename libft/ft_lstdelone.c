#include "libft.h"

void    ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
    t_list  *el;

    el = *alst;
    if (el)
    {
        del(el->content, el->content_size);
        free(el);
    }
    el = NULL;
}