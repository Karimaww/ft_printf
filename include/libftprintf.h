#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "../libft/libft.h"
# include <assert.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int     ft_printf(const char *format, ...);
int     ft_format(va_list *argc, const char *format);
char    *ft_flags(const char **format);
int     ft_is_printable(char c);
int     ft_check_flag(const char **format);
int     ft_check_width(const char **format);
int     ft_check_precision(const char **format);
char    *ft_int(va_list *argc);
char    *ft_uint(va_list *argc);
char    *ft_chr(va_list *argc);
char    *ft_str(va_list **argc);
char    *ft_ptr(va_list **argc);
char    *ft_hexa_up(va_list *argc);
char    *ft_hexa_low(va_list *argc);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
#endif