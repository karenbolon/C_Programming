#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char *a;

	a = (char *)b;
	while (len > 0)
	{
		*a++ = (char)c;
		len--;
	}
	return (b);
}

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    memset(str + 13, '.', 8*sizeof(char));
  
    printf("After memset():  %s", str);
//    printf("\nMy function: %s\n", ft_memset(str + 13, '.', 8*sizeof(char)));
    return 0;
}