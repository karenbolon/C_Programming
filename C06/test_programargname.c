void    ft_putchar(char c)
{
    write (1, &c, 1);
    return (0);
}

void    ft_print_program(char *argv[])
{
    int i;

    i = 0;
    while (argv[0][i] != '\0')
        {
            ft_putchar(argv[0][i]);
            i++;
        }
    return (0);
}

int main(int argc, char *argv[])
{   
    if (argc < 2)
        write (1, "Please enter an arugment.", 25);
    else
        ft_print_program(argv[0]);
    return (0);
}