
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ft_substr.c"

char	*ft_substr(char const *s, unsigned int start, size_t len);

int main()
{
    const char *str = "goodday";
    unsigned int start = 2;
    size_t len = 3;

    char *substring = ft_substr(str, start, len);
    if (substring == 0)
    {
        printf("Failed to allocate memory for substring.\n");
        return 1;
    }

    printf("Original string: %s\n", str);
    printf("Substring: %s\n", substring);

    free(substring); // Remember to free the dynamically allocated memory

    return 0;
}

/*
int main()
{
    const char *str = "hola";
    unsigned int start = 4294967295;
    size_t len = 0;

    char *substring = ft_substr(str, start, len);

    printf("Original string: %s\n", str);
    printf("Substring: %s\n", substring);

    free(substring); 

    return 0;
}*/
