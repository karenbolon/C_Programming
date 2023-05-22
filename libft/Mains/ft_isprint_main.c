#include <ctype.h>
#include <stdio.h>
#include "ft_isprint.c"

int ft_isprint(int c);

int main()
{
    int c;

    c = 'Q';
    printf("Printable character with isprint(): %d", isprint(c));
    printf("\nPrintable character with ft_isprint(): %d\n", ft_isprint(c));

    c = '\n';
    printf("\nNon-printable character with isprint(): %d", isprint(c));
    printf("\nNon-printable character with ft_isprint(): %d\n", ft_isprint(c));

    return 0;
}