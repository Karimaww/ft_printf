#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*src;

	src = (unsigned char *)s;
	while (*src)
	{
		if (*src == (unsigned char)c)
			return ((char *)src);
		src++;
	}
	if (*src == (unsigned char)c)
		return ((char *)src);
	return (0);
}
