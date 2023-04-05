/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:17:28 by kbolon            #+#    #+#             */
/*   Updated: 2023/04/04 10:00:31 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{	
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(0, 5));
	printf("%d\n", ft_iterative_power(5, 0));
	return (0);
}*/
