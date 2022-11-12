#include <stdio.h>
#include "include/libftprintf.h"

int main()
{
    int n;
    printf("Real printf : %p\n", &n);
    ft_printf("Ours : %p\n", &n);
    /*
    printf("%d\n", ft_printf("hexadecimal : %X unsigned int : %u string : %s string : %s int : %d char : %c\n", 
                                0xF, 254, "kokoriko", "ehh", 0xF, 'e'));
    */
    return (0);
}