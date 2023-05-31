/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:48:16 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/28 11:24:51 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] < 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_str_is_printable("asdf987f"));
	printf("%d\n", ft_str_is_printable("\0"));
	printf("%d\n", ft_str_is_printable("./`fd	fs["));
	printf("%d\n", ft_str_is_printable("asd[]"));
}*/
