#include <stdio.h>
#include "include/libftprintf.h"

int main()
{
    /*
    const char **bon = malloc(sizeof(char));
    *bon = ft_strdup("-56.*d");
    const char **mauvais = malloc(sizeof(char));
    *mauvais = ft_strdup("*.*d");
    printf("bon : %d\nmauvais : %d\n", check_flag(bon), check_flag(mauvais));
    printf("%u\n", 5, 5, 5);
    printf("%p\n", *bon);
    */
    
    int n;
    ft_printf("%p\n", &n);
    
    //printf("%d\n", ft_printf("hexadecimal : %X unsigned int : %u string : %s string : %s int : %d char : %c\n", 0xF, 254, "kokoriko", "ehh", 0xF, 'e'));
    //printf("%d\n", ft_printf("123 %s %u", "kokoriko", 254));
    /*
    free(bon);
    free(mauvais);
    */
    return (0);
}