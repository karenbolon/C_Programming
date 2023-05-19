/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:59:46 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/19 08:59:50 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/* long int has 8 bytes; short has 2 bytes; created an array with 10 bytes;
Then created a while loop that removes the one digit and adds to array and then
renives the leftover digits on left (past one digit) and enter back through
loop*/
void	ft_putnbr_fd(int n, int fd)
{
	long	longnum;
	short	shortnum;
	char	arraynum[10];

	longnum = n;
	shortnum = 0;
	if (0 == n)
	{
		write (1, "0", 1);
	}
	if (n < 0)
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
		write (fd, &arraynum[--shortnum], 1);
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(-42);
	write (1, "\n", 1);
	ft_putnbr_fd(0);
	write (1, "\n", 1);
	ft_putnbr_fd(42);
	write (1, "\n", 1);
	ft_putnbr_fd(2147483647);
	write (1, "\n", 1);
	ft_putnbr_fd(-2147483648);
	write (1, "\n", 1);
}*/


