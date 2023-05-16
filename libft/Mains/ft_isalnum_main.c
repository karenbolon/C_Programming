#include <stdio.h>
#include <ctype.h>
#include "ft_isalnum.c"

int ft_isalnum(int c);

int main()
{
    char c;
    int result;

    c = '5';
    printf("number, real isalnum: %d\n", isalnum(c));
    printf("number, my ft_isalnum: %d\n\n", ft_isalnum(c));
    
    c = 'Q';
    printf("letter, real isalnum: %d\n", isalnum(c));
    printf("letter, my ft_isalnum: %d\n\n", ft_isalnum(c));

    c = 'l';
    printf("letter, real isalnum: %d\n", isalnum(c));
    printf("letter, my ft_isalnum: %d\n\n", ft_isalnum(c));

    c = '+';
    printf("symbol, real isalnum: %d\n", isalnum(c));
    printf("symbol, my ft_isalnum: %d\n\n", ft_isalnum(c));

    return 0;
}