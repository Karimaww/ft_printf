#include "libft.h"

char    *ft_strcat(char *dest, const char *src)
{
    size_t	destl;

    destl = ft_strlen(dest);
    ft_strcpy(dest + destl, src);
    return (dest);
}
