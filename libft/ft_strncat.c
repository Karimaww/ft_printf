#include "libft.h"

char    *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t          destl;
    unsigned char   *d;
    unsigned char   *s;

    destl = ft_strlen(dest);
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    while (*s && n--)
        *(d++ + destl) = *s++;
    *(d + destl) = '\0';
    return (dest);
}