int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index < 2)
        return (index);
    else
        return ft_fibonacci(index - 1) + ft_fibonacci(index - 2 );                 
}

#include <stdio.h>

int main()
{
    printf("%i", ft_fibonacci(7));
    return (0);
}