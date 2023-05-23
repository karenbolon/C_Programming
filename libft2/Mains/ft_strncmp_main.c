#include "ft_strncmp.c"

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int main()
{
	unsigned char s1[10] = "abcdef";
    unsigned char s2[10] = "abc\xfdxx";
	unsigned char s3[10] = "abcdef";
    unsigned char s4[10] = "abc\xfdxx";
	
	printf("my ft: %d\n", ft_strncmp("t", "", 0)); 
	printf("actual: %d\n\n", strncmp("t", "", 0)); 
	printf("my ft: %d\n", ft_strncmp("1234", "1235", 3));
	printf("actual ft: %d\n\n", strncmp("1234", "1235", 3));
	printf("my ft: %d\n", ft_strncmp("1234", "1235", 4));
	printf("actual: %d\n\n", strncmp("1234", "1235", 4));
	printf("my ft: %d\n", ft_strncmp("1234", "1235", -1));
	printf("actual: %d\n\n", strncmp("1234", "1235", -1));
	printf("my ft: %d\n", ft_strncmp("","", 42));
	printf("actual: %d\n\n", strncmp("","", 42));
	printf("my ft: %d\n", ft_strncmp((char *)s1,(char *)s2, 5));
	printf("actual: %d\n", strncmp((char *)s3,(char *)s4, 5));
}