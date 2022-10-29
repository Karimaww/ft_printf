#include "../include/libftprintf.h"

char    *ft_int(va_list *argc)
{
    int value;

    value = (int) va_arg(*argc, int);
    return (ft_itoa(value));
}

char    *ft_uint(va_list *argc)
{
    unsigned int value;

    value = (unsigned int) va_arg(*argc, unsigned int);
    return (ft_itoa(value));
}