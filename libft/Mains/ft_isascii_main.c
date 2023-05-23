
#include<stdio.h>
#include<ctype.h>
#include "ft_isascii.c"

int ft_istascii(int c);

int main()
{
    int c= 'a';

    printf("ascii character wtih fcn: %d\n", isascii(c));
    printf("ascii character wtih my fcn: %d\n\n", ft_isascii(c));

    c= 0x80;

    printf("ascii character wtih fcn: %d\n", isascii(c));
    printf("ascii character wtih my fcn: %d\n\n", ft_isascii(c));
  return 0;
}