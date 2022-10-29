#include "../include/libftprintf.h"

char    *ft_chr(va_list *argc)
{
    char    *c;

    c = (char *) malloc (sizeof(char) * 2);
    c[0] = va_arg(*argc, int);
    c[1] = '\0';
    return (c);
}

char    *ft_str(va_list **argc)
{
    char    *s1;
    char    *s2;

    s1 = (char *) va_arg(**argc, char*);
    s2 = ft_strdup(s1);
    return (s2);
}