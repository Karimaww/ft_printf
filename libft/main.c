//ft_atoi.c
/*
int main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    printf("ft_atoi %s : %d\n", av[1], ft_atoi(av[1]));
    printf("atoi %s : %d\n", av[1], atoi(av[1]));
    return (1);
}
*/
//ft_strsplit.c
/*
int main(int ac, char **av)
{
    if (ac == 3)
    {
        char    **tab;
        tab = ft_strsplit(av[1], av[2][0]);
        int i = 0;
        while (tab[i])
        {
            printf("tab[%d] : %s\t", i, tab[i]);
            i++;
        }
        printf("\n");
    }
}
*/
/*
int     main(int ac, char **av)
{
    printf("len : %zu\n", ft_strlen(av[1]));
    if (ac != 2)
        return (0);
    printf("ft_strtrim : %s\n", ft_strtrim(av[1]));
    return (0);
}
*/
/*
int	main(void)
{
	char s1[] = "dle teba";
	char s2[1024] = " rosvete i toumani";
	printf("res: %s\n", ft_strcat(s2, s1));
	return (0);
}
*/
//ft_strtrim.c : ./a.out "     " | cat -e (weird reaction)
/*
int main(int ac, char **av)
{
    if (ac == 2)
    {
        printf("%s\n", ft_strtrim(av[1]));
    }
    
    return (0);
}
*/

//ft_strjoin.c
/*
int main(int ac, char **av)
{
    if (ac == 3)
    {
        char *strf = ft_strjoin(av[1], av[2]);
        printf("result: %s \n", strf);
        free(strf);
    }
    return (0);
}
*/

//ft_strsub.c
/*
int main(int ac, char **av)
{
    if (ac == 4)
    {
        printf("string original: %s\nstring new: %s\n", av[1], ft_strsub(av[1], atoi(av[2]), atoi(av[3])));
    }
    return (0);
}
*/

//ft_strequ.c
/*
int main(int ac, char **av)
{
    if (ac == 3)
    {
        printf("same ? %d\n", ft_strequ(av[1], av[2]));
    }
    return (0);
}
*/

//ft_strnequ.c
/*
int main(int ac, char **av)
{
    if (ac == 4)
    {
        printf("same ? %d\n", ft_strnequ(av[1], av[2], atoi(av[3])));
    }
    return (0);
}
*/

//ft_strmap.c
/*char	add(char a)
{
	return (++a);
}

int	main()
{
	const char tab[5] = "12345";
	char *ret = ft_strmap(tab, &add);
	int	i=0;
	while (i < 5)
	{
		printf("ret[%d] : %c\n", i, ret[i]);
		i++;
	}
	free(ret);
	return (0);
}*/