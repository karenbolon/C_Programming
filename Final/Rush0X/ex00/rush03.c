/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:28:56 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/18 17:21:03 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char x);

void	ft_main_row(int ra)
{
	int	a;

	a = 1;
	ft_putchar('A');
	ra = ra - 2;
	while (a <= ra)
	{
		ft_putchar('B');
		a++;
	}
	ft_putchar('C');
	write(1, "\n", 1);
}

void	ft_middle_row(int ra)
{
	int	a;

	a = 1;
	ft_putchar('B');
	ra = ra - 2;
	while (a <= ra)
	{
		ft_putchar(' ');
		a++;
	}
	ft_putchar('B');
	write(1, "\n", 1);
}

void	ft_column(int ca)
{	
	int	a;

	a = 0;
	ca = ca - 2;
	ft_putchar('A');
	write(1, "\n", 1);
	while (a <= ca)
	{
		ft_putchar('B');
		write(1, "\n", 1);
		a++;
	}
	ft_putchar('A');
	write(1, "\n", 1);
}

void	ft_normal(int x, int y)
{
	int	b;

	b = 1;
	ft_main_row(x);
	y = y - 2;
	while (b <= y)
	{
		ft_middle_row(x);
		b++;
	}
	ft_main_row(x);
}

void	rush(int x, int y)
{
	if (x > 1 && y > 1)
	{
		ft_normal(x, y);
	}
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		write(1, "\n", 1);
	}
	if (y == 1 && x > 1)
	{
		ft_main_row(x);
	}
	if (x == 1 && y > 1)
	{
		y = y - 1;
		ft_column(y);
	}
}
