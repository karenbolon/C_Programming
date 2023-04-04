/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:28:46 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/23 10:51:30 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int a;
	int b;
	int x;
	int y;

	a = 11;
	b = 5;
	ft_div_mod(a, b, &x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
}*/
