
#include <stdio.h>
#include "ft_strlcpy.c"

size_t	ft_strlcpy(char *dst, char *src, size_t size);

int	main()
{
	char	src[] = "Hello There!";
	char	dst[] = "abcdefgthi";
    char	dst1[] = "abcdefgthi";
	printf("My function: %zu, dst: %s\n", ft_strlcpy(dst, src, 6), dst);
    printf("Actual function: %zu, dst1code: %s\n", strlcpy(dst1, src, 6), dst1);
}