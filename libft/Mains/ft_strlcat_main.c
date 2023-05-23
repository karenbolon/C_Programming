
#include <stdio.h>
#include "ft_strlcat.c"

size_t    ft_strlcat(char *dst, char *src, size_t size);

int main()
{
    char    src[10] = "def";
    char    dest[10] = "abc";

    printf("ft_strcat: %zu | %s\n", ft_strlcat(dest, src, 6), dest);

    char    src1[10] = "def";
    char    dest1[10] = "abc";

    printf("strlcat: %zu | %s\n", strlcat(dest1, src1, 6), dest1);
    return (0);
}
