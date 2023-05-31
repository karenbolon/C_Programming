/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:42:26 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/26 14:56:33 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*#include <stdio.h>

int	main()
{
	printf("%d", ft_str_is_numeric("392093"));
	printf("\n%d", ft_str_is_numeric("19h12g0"));
	printf("\n%d", ft_str_is_numeric(" "));
	printf("\n%d", ft_str_is_numeric("!0019"));
}*/
