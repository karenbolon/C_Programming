#include <stdio.h>
#include <ctype.h>
#include "ft_isalpha.c"

int ft_isalpha(int c);

int main()
{
    char c;
    c = 'Q';
    printf("\nUppercase alphabet with real fcn: %d", isalpha(c));
    printf("\nUppercase alphabet with my ft_isalpha: %d", ft_isalpha(c));

    c = 'a';
    printf("\n\nLowercase alphabet with real fcn: %d", isalpha(c));
    printf("\nLowercase alphabet with ft_isalpha: %d", ft_isalpha(c));

    c='+';
    printf("\n\nNon-alphabetic character with real fcn: %d", isalpha(c));
    printf("\nNon-alphabetic character with ft_isalpha: %d", ft_isalpha(c));
    return 0;
}