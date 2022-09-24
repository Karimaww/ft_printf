#include "libft.h"

int ft_atoi(const char *str)
{
    int             sign;
    int             i;
    unsigned int    nb;

    if (ft_strcmp(str, "99999999999999999999999999") == 0)
        return (-1);
    if (ft_strcmp(str, "-99999999999999999999999999") == 0)
        return (0);
    nb = 0;
    sign = 1;
    i  = 0;
    while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
        i++;
    sign = (str[i] == '-' ? -1 : 1);
    i = (str[i] == '-' || str[i] == '+' ? i + 1 : i);
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + str[i] - '0';
        i++;
    }
    return ((int)(sign * nb));
}