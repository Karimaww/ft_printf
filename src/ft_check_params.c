#include "../include/libftprintf.h"

int ft_is_printable(char c)
{
    if (c == 'd' || c == 'i'
        || c == 'u' || c == 'p'
        || c == 'c' || c == 's'
        || c == 'x' || c == 'X')
        return (1);
    return (0);
}

int ft_check_flag(const char **format)
{
    //printf("in ft_check_flag : %c\n", **format);
    if (**format == '-' || **format == '0')
    {
        *format += 1;
        return (ft_check_width(format));
    }
    return (ft_check_width(format));
}

int ft_check_width(const char **format)
{
    if (**format == '*')
    {
        *format += 1;
        return (ft_check_precision(format));    
    }
    while (**format >= '0' && **format <= '9')
        *format += 1;
    return (ft_check_precision(format));
}

int ft_check_precision(const char **format)
{
    if (**format == '.')
    {
        *format += 1;
        if (**format == '*')
        {
            *format += 1;
            if (ft_is_printable(**format))
                return (1);
        }
        else
        {
            while (**format >= '0' && **format <= '9')
                *format += 1;
            if (ft_is_printable(**format))
                return (1);
        }
    }
    //if (ft_is_printable(**format))
     //   return (1);
    return (0);
}