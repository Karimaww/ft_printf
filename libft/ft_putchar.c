#include "libft.h"
/*
void	ft_puthexa(unsigned char n)
{
	if (n > 15)
		ft_puthexa(n / 16);
	write(1, &("0123456789abcdef"[n % 16]), 1);
}

void	ft_putchar(char c)
{
    if (c < 32 || c > 126)
    {
        write(1, "\\", 1);
        if (c < 16 && c >= 0)
				write(1, "0", 1);
		ft_puthexa(c);
    }
    else
        write(1, &c, 1);
}*/

/*void	ft_putchar(char c)
{
    if ((unsigned char)c < 128)
        write(1, &c, 1);
    else
        write(1, &c, 6);
}*/

void    ft_putchar(char c)
{
    //const char *ideo = "\u6C60";
    //printf("池: %c\n", c);
    //write(1, ideo, ft_strlen(ideo));
    //write(1, &c, 1);
    ft_putchar_fd(c, 1);
}