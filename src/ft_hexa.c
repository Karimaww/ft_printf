#include "../include/libftprintf.h"

char    *ft_hexa_up(va_list *argc)
{
    int value;

    value = (int) va_arg(*argc, int);
    return (ft_convert_base(ft_itoa(value), "0123456789", "0123456789ABCDEF"));
}

char    *ft_hexa_low(va_list *argc)
{
    int value;

    value = (int) va_arg(*argc, int);
    return (ft_convert_base(ft_itoa(value), "0123456789", "0123456789abcdef"));
}