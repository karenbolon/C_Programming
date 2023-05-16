#include <string.h>
#include <stdio.h>
#include "ft_memset.c"
//#include "libft.h"

void *ft_memset(void *b, int c, size_t len);


int main()
{
    char str[50] = "abcdefghijklmnopqrstuvwxyz";
    char str1[50] = "abcdefghijklmnopqrstuvwxyz";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    memset(str + 13, '.', 8);
    ft_memset(str1 + 13, '.', 8);

    printf("After memset():  %s", str);
    printf("\nMy function: %s\n", str1);
    return 0;
}