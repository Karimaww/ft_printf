#include "libft.h"

int	ft_in(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_in(set, s1[i]))
		i++;
	while (s1[j] && ft_in(set, s1[j]))
		j--;
	if (!s1[i] || j == 0)
	{
		str = (char *)malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (j - i + 2));
	if (!str)
		return (NULL);
	k = 0;
	while (s1[i] && i <= j)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}
