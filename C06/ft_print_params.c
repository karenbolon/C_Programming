#include <unistd.h>

char ft_putchar(char c)
{
    write (1, &c, 1);
}

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i = 1;

    while (i < argc)
    {
        int j = 0;
        while (argv[i][j] != '\0')
        {
            ft_putchar(argv[i][j]); //should j be j = 0?
            j++; //do I need this?
        }
        i++;
    }
    ft_putchar('\n');
    return 0;
}
