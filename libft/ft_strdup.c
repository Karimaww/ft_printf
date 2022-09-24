#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *res;
    size_t  i;

    res = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!res)
        return (NULL);
    i = 0;
    while (s[i])
    {
        res[i] = s[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}