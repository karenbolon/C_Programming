/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:22:21 by kbolon            #+#    #+#             */
/*   Updated: 2023/04/03 13:16:15 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	nb1;
	int	nb2;

	nb = 5;
	nb1 = 0;
	nb2 = -3;
	printf("Factorial of %d is %d\n", nb, ft_recursive_factorial(nb));
	printf("Factorial of %d is %d\n", nb1, ft_recursive_factorial(nb1));
	printf("Factorial of %d is %d\n", nb2, ft_recursive_factorial(nb2));
	return (0);
}*/
