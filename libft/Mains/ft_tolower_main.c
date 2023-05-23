
#include <stdio.h>
#include <ctype.h>
#include "ft_tolower.c"

int ft_tolower(int c);

int main() {
    int c;

    c = 'm';
    printf("real: %c -> %c", c, tolower(c));
    printf("\nmy fcn: %c -> %c", c, ft_tolower(c));

    c = 'D';
    printf("\n\nreal: %c -> %c", c, tolower(c));
    printf("\nmy fcn: %c -> %c", c, ft_tolower(c));

    c = '9';
    printf("\n\n%c -> %c", c, tolower(c));
    printf("\nmy fcn: %c -> %c\n", c, ft_tolower(c));
    return 0;
}