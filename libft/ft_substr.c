#include "libft.h"

int	ft_lenstr(char const *s, unsigned int start, size_t len)
{
	int	size;

	size = ft_strlen(s) - start;
	if (size <= 0)
		return (0);
	if (size > (int) len)
		return (len);
	return (size);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)malloc(sizeof(char) * (ft_lenstr(s, start, len) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}
