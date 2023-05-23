
#include <stdio.h>
#include <ctype.h>
#include "ft_isdigit.c"

int ft_isdigit(int c);

int main()
{
    char c;
    c = 'Q';
    printf("\nAlphabet with real function: %d", isdigit(c));
    printf("\nAlphabet with my function: %d", ft_isdigit(c));

    c = '1';
    printf("\n\nNumber with real function: %d", isdigit(c));
    printf("\nNumber with my function: %d", ft_isdigit(c));

    c='+';
    printf("\n\nSymbol with real function: %d", isdigit(c));
    printf("\nSymbol with my function: %d", ft_isdigit(c));


    c='9';
    printf("\n\nSymbol with real function: %d", isdigit(c));
    printf("\nSymbol with my function: %d\n", ft_isdigit(c));
    return 0;
}