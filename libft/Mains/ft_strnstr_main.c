#include <stdio.h>
#include <string.h>
#include "ft_strnstr.c"
#include "ft_strlen.c"

char *ft_strnstr(const char *big, const char *little, size_t len);
size_t ft_strlen(const char *str);

int main(void)
{
    char big1[] = "hello world";
    char little1[] = "world";
    printf("My function: %s\n", ft_strnstr(big1, little1, ft_strlen(big1))); // Expected output: "world"
    printf("Real function: %s\n\n", strnstr(big1, little1, ft_strlen(big1))); 

    char big2[] = "hello world";
    char little2[] = "goodbye";
    printf("My function: %s\n", ft_strnstr(big2, little2, ft_strlen(big2))); // Expected output: "(null)"
    printf("Real function: %s\n\n", strnstr(big2, little2, ft_strlen(big2))); 
    
    char big3[] = "hello world";
    char little3[] = "hello";
    printf("My function: %s\n", ft_strnstr(big3, little3, ft_strlen(little3))); // Expected output: "hello world"
    printf("Real function: %s\n\n", strnstr(big3, little3, ft_strlen(little3))); 

    char big4[] = "hello world";
    char little4[] = "";
    printf("My function: %s\n", ft_strnstr(big4, little4, ft_strlen(big4))); // Expected output: "hello world"
    printf("Real function: %s\n\n", ft_strnstr(big4, little4, strlen(big4)));

    return 0;
}