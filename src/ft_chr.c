#include "../include/libftprintf.h"

char    *ft_chr(va_list argc)
{
    char    *c;

    c = (char *) malloc (sizeof(char) * 2);
    c[0] = (int) va_arg(argc, int);
    c[1] = '\0';
    return (c);
}