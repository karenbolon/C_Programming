/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:24:14 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/12 16:20:21 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int ft_isspace(int c)
{
	if (c >= 9 && c <= 13 || c == 32)
		return (1);
	else
		return (0);
}*/

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (((str[i] >= 0 && str[i] <= 13) || str[i] == 32) && (str[i] != '\0'))
		i++;
	if (str[i] == 45)
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
