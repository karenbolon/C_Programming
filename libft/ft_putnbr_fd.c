/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:59:46 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/16 15:17:07 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	size_t	i;

	i = 0;
	while (n >= 0)
	{
		write (fd, &s[i], 1);
		i++;
	}
}

{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = n * (-1);
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10);
			ft_putnbr(n % 10);
		}
		else
			ft_putchar(n + '0');
	}
}

int	main(void)
{
	ft_putnbr(-42);
	write (1, "\n", 1);
	ft_putnbr(0);
	write (1, "\n", 1);
	ft_putnbr(42);
	write (1, "\n", 1);
	ft_putnbr(2147483647);
	write (1, "\n", 1);
	ft_putnbr(-2147483648);
	write (1, "\n", 1);
	return (0);
}

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}

