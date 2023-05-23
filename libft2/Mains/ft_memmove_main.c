
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_memmove.c"

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	char	src[] = "0123456789";
	char	dest[] = "abcdefghijklmnopqrstuvwxyz";
	char	src1[] = "abcdefghijklmnopqrstuvwxyz";
	char	dest1[] = "0123456789";

	printf("%s", (char *)ft_memmove(dest, src, 3));
	printf("\n%s", (char *)memmove(dest, src, 3));
	printf("\n%s", (char *)ft_memmove(dest1, src1, 7));
	printf("\n%s", (char *)memmove(dest1, src1, 7));
	return (0);
}
