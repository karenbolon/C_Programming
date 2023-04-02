int ft_sqrt(int nb)
{
    int i;

    i = 0;
    if (nb < 0)
        return (0);
    while (i * i <= nb)
    {
        if (i * i == nb)
        {
            return (i);
        }
        i++;
    }
    return (0);
}

#include <stdio.h>

int main()
{
    printf("%d\n", ft_sqrt(4));
    printf("%d\n", ft_sqrt(0));
    printf("%d\n", ft_sqrt(-25));
    printf("%d\n", ft_sqrt(25));
    printf("%d\n", ft_sqrt(1));
    return (0);
}

