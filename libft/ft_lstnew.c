#include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
    t_list  *el;

    el = (t_list *)malloc(sizeof(t_list));
    if (!el)
        return (NULL);
    el->content = (void *)content;
    if (!content)
        el->content_size = 0;
    else   
        el->content_size = content_size;   
    return (el);
}