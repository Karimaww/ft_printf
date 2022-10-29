#include "../include/libftprintf.h"

char    *ft_ptr(va_list **argc)
{
    void *str;

    str = va_arg(**argc, void *);
    printf("STR : %p\n", (char *)str);

    //return (ft_convert_base((char *)str, "0123456789ABCDEF", "0123456789ABCDEF"));
    char    *s2;
    s2 = ft_strdup((char *)str);
    return s2;
}