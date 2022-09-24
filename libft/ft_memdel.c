#include "libft.h"

void    ft_memdel(void **ap)
{
    unsigned char **str = (unsigned char **)ap;

    free(*str);
    *str = NULL;
}