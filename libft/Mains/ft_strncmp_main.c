#include "ft_strncmp.c"

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int main()
{
	char	s1[] = "abc";
	char	s2[] = "abc";
	char	s3[] = "abd";
	char	s4[] = "abc";
	char	s5[] = "abb";
	char	s6[] = "abc";
	printf("Comparison with my ft: %d\n", ft_strncmp(s1, s2, 5));
	printf("Comparison with actual ft: %d\n\n", strncmp(s1, s2, 5));
	printf("Comparison with my ft: %d\n", ft_strncmp(s3, s4, 5));
	printf("Comparison with actual ft: %d\n\n", strncmp(s3, s4, 5));
	printf("Comparison with my ft: %d\n", ft_strncmp(s5, s6, 5));
	printf("Comparison with actual ft: %d\n\n", strncmp(s5, s6, 5));
}