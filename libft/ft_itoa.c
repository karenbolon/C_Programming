/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:29:48 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/20 10:24:13 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len = 1;
	else
		len = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int n)
{
	unsigned int	nbr;
	int				sign;
	int				len;
	char			*p;

	sign = 0;
	len = ft_nbrlen(n);
	if (n < 0)
	{
		sign = 1;
		nbr = -n;
	}
	else
		nbr = n;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == 0)
		return (0);
	p[len--] = '\0';
	while (len >= 0)
	{
		p[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	if (sign == 1)
		p[0] = '-';
	return (p);
}

