/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:31:47 by kbolon            #+#    #+#             */
/*   Updated: 2023/06/16 10:46:12 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_helper.c"

void	ft_putchar(int c, int *count);
void	ft_putnbr(unsigned long nu, int *count);
void	ft_putunbr(unsigned int n, int *count);
int	ft_ptrconv(void *ptr, int *count);

int	get_hex_digit(unsigned long num, char format)
{
	if (num < 10)
		return ('0' + num);
	else
	{
		if (format == 'X')
			return ('A' + num - 10);
		else if (format == 'x')
			return ('a' + num - 10);
	}
	return (0);
}

void	ft_hexaconv(unsigned long n, char format, int *count)
{
	int				i;
	char			hexadecimalnum[17];
	unsigned long	remainder;

	i = 0;
	if (n == 0)
	{
		ft_putchar('0', count);
		return ;
	}
	while (n != 0)
	{
		remainder = n % 16;
		hexadecimalnum[i++] = get_hex_digit(remainder, format);
		n = n / 16;
	}
	while (i > 0)
		ft_putchar(hexadecimalnum[--i], count);
}

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write (1, "(null)", 6);
		(*count) += 6;
		return ;
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
		(*count)++;
	}
}

void	ft_sort(char c, va_list ap, int *count)
{
	if (c == '%')
		ft_putchar('%', count);
	else if (c == 'c')
		ft_putchar(va_arg(ap, int), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ap, int), count);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (c == 'u')
		ft_putunbr(va_arg(ap, unsigned long), count);
	else if (c == 'x' || c == 'X')
		ft_hexaconv(va_arg(ap, unsigned int), c, count);
	else if (c == 'p')
		ft_ptrconv(va_arg(ap, void *), count);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			count;
	int			i;

	count = 0;
	i = 0;
	va_start(ap, format);
	if (!format)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && (format[i + 1] == 'c' || format[i + 1] == 's' \
			|| format[i + 1] == 'd' || format[i + 1] == 'i' || format[i + 1] == \
			'u' || format[i + 1] == 'x' || format[i + 1] == 'X' || \
			format[i + 1] == '%' || format[i + 1] == 'p'))
		{
			ft_sort(format[i + 1], ap, &count);
			i++;
		}
		else
			ft_putchar(format[i], &count);
		i++;
	}
	va_end(ap);
	return (count);
}

int main()
{
	int	pt;
	int	ft_pt;
	char str[] = "Hello, World!";

  	int i = -1;
	unsigned int u= -1;
	int j = 74;
	int *var;

	var = malloc(sizeof(int));

    *var = 10;

    ft_printf("fake char: %c %c\n", 'a', 'b');
	printf("real char: %c %c\n", 'a', 'b');
	ft_printf("fake %: %%. \n");
	printf("real %: %%.\n");
    ft_printf("fake dec: %d\n", i);
	printf("real dec: %d\n", i);
	ft_printf("fake dec and char: %d %c\n", i, 'a');
	printf("real dec and char: %d %c\n", i, 'a');
    ft_printf("fake str: %s\n", str);
	printf("real str: %s\n", str);
	ft_printf("fake int: %i\n", i);
	printf("real int: %i\n", i);
	ft_printf("fake u int: %u\n", u);
	printf("real u int: %u\n", u);
	ft_printf("fake x conv: %x\n", j);
	printf("real x conv: %x\n", j);
	ft_printf("fake X conv: %X\n", j);
	printf("real X conv: %X\n", j);
	ft_printf("fake ptr: %p\n", var);
	printf("real ptr: %p\n", var);
	ft_pt = ft_printf("fake ptr: %p %p\n", NULL, var);
	pt = printf("real ptr: %p %p\n", NULL, var);
	printf("fake ptr count: %i\n", ft_pt);
	printf("real ptr count: %i\n", pt);
	ft_printf("fake empty str: %s\n","");
	printf("real empty str: %s\n","");
	ft_pt =  ft_printf("fake char: %c%c%c\n", 'c', 'b', 'a');
	pt = printf("real char: %c%c%c\n", 'c', 'b', 'a');
	printf("fake count int: %i\n", ft_pt);
	printf("real count int: %i\n\n", pt);

	ft_pt =  ft_printf("fake char: %i, %i\n", 0, 0);
	pt = printf("real char: %i, %i\n", 0, 0);
	printf("fake count int: %i\n", ft_pt);
	printf("real count int: %i\n\n", pt);

	ft_pt =  ft_printf("fake char: %k\n", str);
	pt = printf("real char: %k\n", str);
	printf("fake count int: %i\n", ft_pt);
	printf("real count int: %i\n\n", pt);

	free(var);

	return (0);
}