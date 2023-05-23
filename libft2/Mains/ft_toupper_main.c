
#include <stdio.h>
#include <ctype.h>
#include "ft_toupper.c"

int ft_toupper(int c);

int main() {
    char c;

    c = 'm';
    printf("real: %c -> %c", c, toupper(c));
    printf("\nmy fcn: %c -> %c", c, ft_toupper(c));

    c = 'D';
    printf("\n\nreal: %c -> %c", c, toupper(c));
    printf("\nmy fcn: %c -> %c", c, ft_toupper(c));

    c = '9';
    printf("\n%c -> %c", c, toupper(c));
    printf("\nmy fcn: %c -> %c", c, ft_toupper(c));
    return 0;
}
