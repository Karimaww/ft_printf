#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char    *tmp;
    char    *found;

    if (c == '\0')
        return (ft_strchr(s, c));
    tmp = ft_strchr(s, c);
    found = NULL;
    while (tmp)
    {
        found = tmp;
        s = tmp + 1;
        tmp = ft_strchr(s, c);
    }
    return (found);
}