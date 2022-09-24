#include "include/libftprintf.h"

char    *ft_chr(va_list argc)
{
    char    *c;

    c = (char *) malloc (sizeof(char) * 2);
    c[0] = (char) va_arg(argc, char);
    c[1] = '\0';
    return (c);
}