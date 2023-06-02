/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:08:12 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/31 12:20:38 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
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
//ch = special character in printf request "%d..." 
if (ch == c)
	return (ft_putchar(??));//how to make it look for the variable to print?  Is there a temp thing? va_arg?

if (ch == s)
	return (ft_putstr(??));

if (ch == d)
	return (ft_putnbr(??));