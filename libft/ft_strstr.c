#include "libft.h"

char    *ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	needl;

	i = 0;
	needl = ft_strlen(needle);
	if (ft_strncmp(haystack, needle, needl) == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		if (ft_strncmp(haystack + i, needle, needl) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return ((void *)0);
}