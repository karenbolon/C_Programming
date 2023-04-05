/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:11:07 by kbolon            #+#    #+#             */
/*   Updated: 2023/04/04 11:31:43 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a function that returns 1 if the number given is a prime number 
and 0 if not.*/

int	ft_is_prime(int nb)
{
	long	i;

	i = 3;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if ((nb > 2) && (nb % 2 == 0))
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(17));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(-5));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(2147483647));
	return (0);
}*/
