#include "../include/libftprintf.h"

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	is_character_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	get_nbr_len(char *str, char *base)
{
	int	i;

	i = 0;
	while (str[i] != 0 && is_character_in_base(str[i], base))
		i++;
	return (i);
}

int	ft_is_base_valid(char *base)
{
	int	i;
	int	y;

	i = 0;
	while (base[i] != 0)
	{
		y = 0;
		if (base[i] == '-' || base[i] == '+' || ft_isspace(base[i]) == 1)
			return (0);
		while (base[y] != 0)
		{
			if (base[i] == base[y] && i != y)
				return (0);
			y++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}
