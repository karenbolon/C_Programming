/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:01:49 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/26 14:41:42 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' \
				&& str[i] <= 'z'))
			i++;
		else
			return (0);
	}	
	return (1);
}
/*#include <stdio.h>

int	main()
{
	printf("%d", ft_str_is_alpha("abcde"));
	printf("\n%d", ft_str_is_alpha("abc1d"));
	printf("\n%d", ft_str_is_alpha("!1~a"));
}*/
