#include "libft.h"

char    *ft_strtrim(char const *s)
{
    size_t  i;
    size_t  j;
    size_t  k;
    char    *str;

    i = 0;
    j = ft_strlen(s) - 1;
    while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
        i++;
    while (j >= 0 && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
        j--;
    if (!s[i] || j == 0)
        return ("");
    str = (char *)malloc(sizeof(char) * (j - i + 2));
    if (!str)
        return (NULL);
    k = 0;
    while (s[i] && i <= j)
        str[k++] = s[i++];
    str[k] = '\0';
    return (str);
}