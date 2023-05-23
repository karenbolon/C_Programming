
#include <stdio.h>
#include <string.h>
#include "ft_memcpy.c"

void *ft_memcpy(void *dest, const void *src, size_t n);

int main()
{
    char src[] = "0123456789";
    char dest[] = "abcdefghijklmnopqrstuvwxyz";
    char dest1[] = "Numbers and letters";

    printf("%s", (char *)ft_memcpy(dest, src, 3));
    printf("\n%s", (char *)memcpy(dest, src, 3));
    printf("\n%s", (char *)ft_memcpy(dest1, src, 7));
    printf("\n%s", (char *)memcpy(dest1, src, 7));
    return (0);
}