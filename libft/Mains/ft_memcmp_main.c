#include <string.h>
#include <stdio.h>
#include "ft_memcmp.c"

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main()
{
	char    s1[] = "abc";
	char    s2[] = "abc";
	char    s3[] = "abd";
	char    s4[] = "abc";
	char    s5[] = "abb";
	char    s6[] = "abc";
	printf("Comparison with my ft: %d\n", ft_memcmp(s1, s2, 5));
	printf("Comparison with actual ft: %d\n", memcmp(s1, s2, 5));
	printf("Comparison with my ft: %d\n", ft_memcmp(s3, s4, 5));
	printf("Comparison with actual ft: %d\n", memcmp(s3, s4, 5));
	printf("Comparison with my ft: %d\n", ft_memcmp(s5, s6, 5));
	printf("Comparison with actual ft: %d\n", memcmp(s5, s6, 5));
}
