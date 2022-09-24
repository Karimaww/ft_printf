#include "libft.h"

void    ft_rec_fd(unsigned int n, int fd)
{
    if (n > 9)
        ft_rec_fd(n / 10, fd);
    write(fd, &("0123456789"[n % 10]), 1);
}

void    ft_putnbr_fd(int n, int fd)
{
    unsigned int    nb;

    if (n < 0)
    {
        nb = -n;
        write(fd, "-", 1);
    }
    else
        nb = n;
    ft_rec_fd(nb, fd);
}