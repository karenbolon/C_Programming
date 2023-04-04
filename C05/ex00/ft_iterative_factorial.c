/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:24:56 by kbolon            #+#    #+#             */
/*   Updated: 2023/04/04 10:04:35 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	unsigned int	num;

	i = nb;
	num = 1;
	if (i < 0)
		return (0);
	if (i == 0)
		return (1);
	while (i >= 1)
	{
		num = num * i;
		i--;
	}
	return (num);
}
/*
#include <stdio.h>

int	main ()
{
	printf("Factoral of 5: %d\n", ft_iterative_factorial(5));
    printf("Factoral of -2: %d\n", ft_iterative_factorial(-2));
    printf("Factoral of 0: %d\n", ft_iterative_factorial(0));
    printf("Factoral of 3: %d", ft_iterative_factorial(3));

	return (0);
}*/
