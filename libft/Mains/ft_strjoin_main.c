#include <stdio.h>
#include "ft_strjoin.c"

char	*ft_strjoin(char const *s1, char const *s2);

int	main(void)
{
	const char	*s1 = "Hello, ";
	const char	*s2 = "world!";
	char		*result = ft_strjoin(s1, s2);

    printf("Concatenated string: %s\n", result);
    free(result);    
}
