#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_print(char*placeholders, ...);
void	ft_putnbr(int nu);
void	ft_putchar(char c);
void	ft_putstr(char *);
/*
int	max(int num_args, ...);*/

size_t ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(void)
{
//	char	*d;

//	d = "H";
	printf("%f\n", 8.0);
//	ft_print ("f", d);

//	char	*str = "Hello";

//	printf("%zu\n", ft_strlen(str));
//	int max_num;
	
//	max_num = max(8, 10, 12, 1400, 16, 2, 0, 20, 31);
//	printf("max_num: %d\n", max_num);
	return (0);
}
/*
int	max(int num_args, ...)
{
	int		i;
	va_list	args; // declare variable name args as a va_list

	i = 0;
	va_start(args, num_args); // initiate variable args 
	int	max = 0;
	while (i < num_args) // create a loop to run through each variable (10, 12, 14, 16)
	{ // num_args = 4 
		int x = va_arg(args, int);
		if (i == 0)
			max = x;
		else if (x > max) 
			max = x;
		printf("x: %d\n", x);
		i++;
	}
	va_end(args); // ends list of arguements
	return (max);
}*/

void	ft_print(char*placeholders, ...)
{
	int	num_args;
	int	i;
	va_list	args;

	num_args = ft_strlen(placeholders);
	i = 0;
	va_start(args, placeholders);
		while (i < num_args)
		{
			if (placeholders[i] == 'd')
			{
				int x = va_arg(args, int);
				ft_putnbr(x);
			}
/*			if (placeholders[i] == 's')
			{
				char	*x;
				x = va_arg(args, int);
				ft_putstr(x);
			}
			if (placeholders[i] == 'c')
			{
				char	*x;
				x = va_arg(args, int);
				ft_putchar((char) x);
			}*/
			else if (placeholders[i] == 'f')
			{
				double x = va_arg(args, double);
				printf("%f\n", x);
			}
			i++;
		}
		va_end(args);
}

void	ft_putnbr(int nu)
{
	long int	n;

	n = nu;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}