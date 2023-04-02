/*Create a function that returns 1 if the number given is a prime number and 0 if not.*/

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i <= nb / 2)
    {
        if (nb % i == 0)
        {
            return (0);
            break;
        }
        i++;
    }
    return (1);
}

#include <stdio.h>

int main()
{
    printf("%d\n", ft_is_prime(17));
    printf("%d\n", ft_is_prime(8));
    printf("%d\n", ft_is_prime(-5));
    printf("%d\n", ft_is_prime(0));
    printf("%d\n", ft_is_prime(2));
    return (0);
}