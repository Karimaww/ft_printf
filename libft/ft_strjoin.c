#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  s1l;
    size_t  s2l;
    char    *join;

    s1l = ft_strlen(s1);
    s2l = ft_strlen(s2);
    join = (char *)malloc(sizeof(char) * (s1l + s2l + 1));
    if (join)
    {
        ft_strcpy(join, s1);
        ft_strcat(join, s2);
    }
    return (join);
}