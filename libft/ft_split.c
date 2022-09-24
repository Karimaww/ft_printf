#include "libft.h"

int     ft_countword(char const *s, char c)
{
    int i;
    int cpt;

    cpt = 0;
    if (s[0] != c)
        cpt++;
    i = 1;
    while (s[i])
    {
        if (s[i - 1] == c && s[i] != c)
            cpt++;
        i++;
    }
    return (cpt);
}

char    *ft_buildw(char const *str, char c)
{
    int     len;
    int     i;
    char    *word;

    len = 0;
    while (str[len] && str[len] != c)
        len++;
    word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    i = 0;
    while (i < len)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char    **ft_split(char const *s, char c)
{
    char    **res;
    int     countw;
    int     i;
    int     pos;

    countw = ft_countword(s, c);
    res = (char **) malloc(sizeof(char *) * (countw + 1));
    if (!res)
        return (NULL);
    if (s[0] != c)
        res[0] = ft_buildw(s, c);
    i = (s[0] != c ? 1 : 0);
    pos = 1;
    while (s[i] && i < countw)
    {
        if (s[pos - 1] == c && s[pos] != c)
        {
            res[i] = ft_buildw(s + pos, c);
            i++;
        }
        pos++;
    }
    res[i] = 0;
    return (res);
}