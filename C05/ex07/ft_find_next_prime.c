/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:01:03 by kbolon            #+#    #+#             */
/*   Updated: 2023/04/04 12:13:23 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;

	i = 2;
	if (nb % 2 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb >= 2)
	{
		while (!ft_is_prime(nb))
			nb++;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(17));
	printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(-5));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(1999999999));
	printf("%d\n", ft_find_next_prime(2100000000));
	printf("%d\n", ft_find_next_prime(75000));
	printf("%d\n", ft_find_next_prime(2147483640));
	return (0);
}*/
