#include "libft.h"

int     ft_nblen(unsigned int n)
{
    int len;

    len = 0;
    if (n == 0)
        return (1);
    while (n > 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

void    ft_putnb(unsigned int n, char *str, int pos)
{
    if (n > 9)
        ft_putnb(n / 10, str, pos - 1);
    str[pos] = n % 10 + '0';
}

char    *ft_itoa(int n)
{
    char            *str;
    int             len;
    unsigned int    nbr;

    nbr = (n < 0 ? n * -1 : n);
    len = (n < 0) + ft_nblen(nbr);
    str = (char *) malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    if (n < 0)
        str[0] = '-';
    str[len] = '\0';
    ft_putnb(nbr, str, len - 1);
    return (str);
}