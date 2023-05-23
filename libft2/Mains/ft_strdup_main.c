

#include <stdio.h>
#include "ft_strdup.c"

int main()
{
    const char *source = "Hello, world!";
    char *duplicate = strdup(source);

    if (duplicate != 0)
    {
        printf("Source: %s\n", source);
        printf("Duplicate: %s\n", duplicate);

        // Free the dynamically allocated memory
        free(duplicate);
    }

    return 0;
}