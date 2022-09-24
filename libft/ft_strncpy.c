#include "libft.h"

char    *ft_strncpy(char *dest, const char *src, size_t n)
{
    unsigned char   *d;
    unsigned char   *s;
    size_t          i;

    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    i = 0;
    while (*s && i < n)
    {
        *d++ = *s++;
        i++;
    }
    while (i < n)
    {
        *d++ = '\0';
        i++;
    }
    return (dest);
}