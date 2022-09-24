#include "libft.h"

void    ft_rec(unsigned int n)
{
    if (n > 9)
        ft_rec(n / 10);
    write(1, &("0123456789"[n % 10]), 1);
}

void    ft_putnbr(int n)
{
    unsigned int    nb;

    if (n < 0)
    {
        nb = -n;
        write(1, "-", 1);
    }
    else
        nb = n;
    ft_rec(nb);
}