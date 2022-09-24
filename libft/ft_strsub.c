#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *res;
    size_t  i;

    res = (char *) malloc(sizeof(char) * len + 1);
    if (!res)
        return (NULL);
    res[len] = '\0';
    i = 0;
    while (i < len)
    {
        res[i] = s[start];
        i++;
        start++;
    }
    return (res);
}