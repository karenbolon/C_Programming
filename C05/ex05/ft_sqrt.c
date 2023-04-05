/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:05:39 by kbolon            #+#    #+#             */
/*   Updated: 2023/04/04 11:22:54 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	j;

	j = nb;
	i = 0;
	if (j <= 0)
		return (0);
	if (j == 1)
		return (1);
	while (i * i <= j && i < 46341)
	{
		if (i * i == j)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("sqrt of %d is %d\n", -2282, ft_sqrt(-2282));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
	printf("sqrt of %d is %d\n", 20286016, ft_sqrt(20286016));
	printf("sqrt of %d is %d\n", 1120795600, ft_sqrt(1120795600));
	printf("sqrt of %d is %d\n", 1046643418, ft_sqrt(1046643418));
	printf("sqrt of %d is %d\n", 231739964, ft_sqrt(231739964));
	printf("sqrt of %d is %d\n", 1455436, ft_sqrt(1455436));
	printf("sqrt of %d is %d\n", 149999990, ft_sqrt(14999990));
	printf("sqrt of %d is %d\n", 259564321, ft_sqrt(259564321));
	printf("sqrt of %d is %d\n", 4, ft_sqrt(4));
	printf("sqrt of %d is %d\n", 416153106, ft_sqrt(416153106));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", -25, ft_sqrt(-25));
	return (0);
}*/
