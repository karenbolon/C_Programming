/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:17:15 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/22 16:10:09 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* long int has 8 bytes; short has 2 bytes; created an array with 10 bytes;
Then created a while loop that removes the one digit and adds to array and then
renives the leftover digits on left (past one digit) and enter back through
loop*/
void	ft_putnbr(int nb)
{
	long	longnum;
	short	shortnum;
	char	arraynum[10];

	longnum = nb;
	shortnum = 0;
	if (0 == nb)
	{
		write (1, "0", 1);
	}
	if (nb < 0)
	{
		longnum = longnum * -1;
		write(1, "-", 1);
	}
	while (longnum % 10)
	{
		arraynum[shortnum++] = (longnum % 10) + '0';
		longnum = longnum / 10;
	}
	while (shortnum >= 0)
	{
		write (1, &arraynum[--shortnum], 1);
	}
}
/*
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
}*/
