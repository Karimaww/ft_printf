#include "libft.h"

char    *ft_strnew(size_t size)
{
    char    *str;

    str = (char *)malloc(sizeof(char) * size + 1);
    if (!str)
        return (NULL);
    str[size] = '\0';
    ft_strclr(str);
    return (str);
}