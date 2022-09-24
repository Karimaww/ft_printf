#include "../include/libftprintf.h"

char    *ft_chr(va_list argc)
{
    char    *c;

    c = (char *) malloc (sizeof(char) * 2);
    c[0] = va_arg(argc, int);
    c[1] = '\0';
    return (c);
}

char    *ft_str(va_list argc)
{
    char    *str;
    str = (char *) va_arg(argc, char*);
    return (str);
}