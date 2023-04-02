int ft_recursive_power(int nb, int power)
{
    int result;
    int i;
    
    i = 0;
    result = 1;
    if (nb < 0 || power < 0)
        return (0);
    if (nb == 0 || power == 0)
        return (1);
    else
    {
        result =  nb * ft_recursive_power(nb, power - 1);
    }
    return (result);
}

int main()
{
    int nb;
    int power;

    nb = -1;
    power = 1;

    printf("%d to the power of %d is: %d\n", nb, power, ft_recursive_power(nb, power));

    nb = 3;
    power = 1;

    printf("%d to the power of %d is: %d\n", nb, power, ft_recursive_power(nb, power));

    nb = 5;
    power = 0;

    printf("%d to the power of %d is: %d\n", nb, power, ft_recursive_power(nb, power));
    
    nb = 5;
    power = 3;

    printf("%d to the power of %d is: %d\n", nb, power, ft_recursive_power(nb, power));
    return(0);
}