#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *t;
    size_t          i;

    t = (unsigned char *)s;
    i = 0;
    while (i < n)
        t[i++] = c;
    return (s);
}