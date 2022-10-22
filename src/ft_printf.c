#include "../include/libftprintf.h"

char    *ft_flags(const char **format)
{
    char    *flag;

    flag = NULL;
    while (**format == ' ')
        *format += 1;
    if (!ft_check_flag(format))
        return (NULL);
    while ((**format >= 0 && **format <= 9)
        || **format == '.' || **format == '*'
        || **format == '-')
    {
        //printf("FORMAT A STRJOIN : %s", *format);
        ft_strjoin(flag, *format);
        *format += 1;
    }
    printf("flag : %s\n", flag);
    return (flag);
}

int     ft_format(va_list argc, const char *format)
{
    char    *str;
    char    *flag;
    int     len;
    //printf("%c\n", *format);
    if (!ft_is_printable(*format) 
        && (flag = ft_flags(&format)) == NULL)
    {
            return (-1);
    }
    //printf("HERE");
    if (*format == 'd' || *format == 'i')
        str = ft_int(argc);
    if (*format == 'u')
        str = ft_uint(argc);
    if (*format == 'c')
        str = ft_chr(argc);
    if (*format == 's')
        str = ft_str(argc);
    /*if (*format == 'p')
        str = ft_ptr(argc);
    if (*format == 'x')
        str = ft_hexa_low(argc);
    if (*format == 'X')
        str = ft_hexa_up(argc);
    ft_putflag(flag, str);*/
    ft_putstr(str);
    len = ft_strlen(str);
    free(str);
    return (len);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int     nbchar;
    char    c;

    nbchar = 0;
    va_start(args, format);
    while((c = *format))
    {
        format++;
        if (c == '%')
        {
            int value;
            nbchar += ft_format(args, format); 
            // L'erreur est qu'il n'avance pas dans le va_arg d'une fct a une autre t.t
            value = (int) va_arg(args, int);
            printf("%d", value);
            format++;
        }
        else
        {
            write(1, &c, 1);
            nbchar++;
        }
    }
    va_end(args);
    return (nbchar);
}