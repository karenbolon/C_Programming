/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:23:29 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/22 16:13:53 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{		
		b = a + 1;
		while (b <= 99)
		{
			ft_write(a / 10 + '0');
			ft_write(a % 10 + '0');
			ft_write(' ');
			ft_write(b / 10 + '0');
			ft_write(b % 10 + '0');
			if ((a != 98) || (b != 99))
			{
				ft_write(',');
				ft_write(' ');
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
