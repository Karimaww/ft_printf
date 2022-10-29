#include "../include/libftprintf.h"

int	ft_isspace(char c);
int	ft_is_base_valid(char *base);
int	is_character_in_base(char c, char *base);
int	get_nbr_len(char *str, char *base);

int	str_base_to_int(char *nbr, char *base)
{
	int	i;
	int	j;
	int	multiplicateur;
	int	resultat;

	i = get_nbr_len(nbr, base) - 1;
	multiplicateur = 1;
	resultat = 0;
	while (i >= 0)
	{
		j = 0;
		while (nbr[i] != base[j])
			j++;
		resultat = resultat + j * multiplicateur;
		i--;
		multiplicateur = multiplicateur * ft_strlen(base);
	}
	return (resultat);
}

void	put_nbr_base2(int nbr, char *base, char *converted_nbr, int i)
{
	if (nbr != 0)
	{
		put_nbr_base2(nbr / ft_strlen(base), base, converted_nbr, i - 1);
		converted_nbr[i] = base[nbr % ft_strlen(base)];
	}
}

char	*put_nbr_base(int nb, char *base, int sign)
{
	char	*converted_nb;
	int		i;
	int		nb_tmp;

	i = 0;
	nb_tmp = nb;
	while (nb_tmp != 0 && ++i)
		nb_tmp = nb_tmp / ft_strlen(base);
	if (i == 0)
	{
		converted_nb = malloc(2 * sizeof(char));
		converted_nb[0] = base[0];
		converted_nb[1] = '\0';
		return (converted_nb);
	}
	converted_nb = malloc((i + 1 + sign) * sizeof(char));
	if (sign == 1)
		converted_nb[0] = '-';
	put_nbr_base2(nb, base, converted_nb, i - (1 - sign));
	converted_nb[i + sign] = '\0';
	return (converted_nb);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		count_sign;
	int		base_to_int;
	char	*result;

	if (ft_is_base_valid(base_from) == 0 || ft_is_base_valid(base_to) == 0)
		return (NULL);
	i = 0;
	count_sign = 0;
	while (ft_isspace(nbr[i]) == 1)
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			count_sign++;
		i++;
	}
	base_to_int = str_base_to_int(&nbr[i], base_from);
	result = put_nbr_base(base_to_int, base_to, count_sign % 2);
	return (result);
}
