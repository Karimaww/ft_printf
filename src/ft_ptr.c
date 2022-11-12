#include "../include/libftprintf.h"

void	put_base(unsigned long long nbr, char *base, char *converted_nbr, int i)
{
	if (nbr != 0)
	{
		put_base(nbr / ft_strlen(base), base, converted_nbr, i - 1);
		converted_nbr[i + 2] = base[nbr % ft_strlen(base)];
	}
}

char	*itoa_base(unsigned long long nb, char *base)
{
	char				*converted_nb;
	int					i;
	unsigned long long	nb_tmp;

	i = 0;
	nb_tmp = nb;
	while (nb_tmp != 0 && ++i)
		nb_tmp = nb_tmp / ft_strlen(base);
	if (i == 0)
	{
		converted_nb = malloc(4 * sizeof(char));
		converted_nb[0] = '0';
		converted_nb[1] = 'x';
		converted_nb[2] = base[0];
		converted_nb[3] = '\0';
		return (converted_nb);
	}
	converted_nb = malloc((i + 3) * sizeof(char));
	converted_nb[0] = '0';
	converted_nb[1] = 'x';
	put_base(nb, base, converted_nb, i - 1);
	converted_nb[i + 2] = '\0';
	return (converted_nb);
}

char    *ft_ptr(va_list **argc)
{
	unsigned long long	ptr;

    ptr = (unsigned long long)va_arg(**argc, void *);
    return itoa_base(ptr, "0123456789abcdef");
}