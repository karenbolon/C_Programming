/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:58:24 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/26 15:08:17 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_str_is_lowercase("abc"));
	printf("\n%d", ft_str_is_lowercase("bcK"));
	printf("\n%d", ft_str_is_lowercase("!01a"));
	printf("\n%d", ft_str_is_lowercase(" "));
}*/
