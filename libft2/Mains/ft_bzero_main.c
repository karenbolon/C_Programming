

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_bzero.c"

void	ft_bzero(void *s, size_t n);

int	main(void)
{
    char buf[16] = "Hello, world!";
    char buf1[16] = "Hello, world!";
    size_t len = sizeof(buf);
    

    printf("Before: %s\n", buf);
    bzero(buf, len);
    ft_bzero(buf1, len);
    printf("After real function: %s\n", buf);
    printf("After my function: %s\n", buf1);

    return 0;
}

