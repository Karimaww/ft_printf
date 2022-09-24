#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (*str1 && *str2 && n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	if (n)
		return (*str1 - *str2);
	return (0);
	/*while (n-- && (*str1++ == *str2++))
	if (n)
		return (*str1 - *str2);
	return (0);*/
}