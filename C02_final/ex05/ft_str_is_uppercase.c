/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:08:51 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/26 15:47:00 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
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
	printf("%d\n", ft_str_is_uppercase("ABCD"));
	printf("%d\n", ft_str_is_uppercase("AbCD"));
	printf("%d\n", ft_str_is_uppercase(" "));
	printf("%d\n", ft_str_is_uppercase("aaaa"));	
}*/
