/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:12:36 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/16 09:33:16 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	const char	*locate;
	size_t		i;

	locate = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
		{
			locate = &str[i];
			break ;
		}
		i++;
	}
	if (str[i] == '\0' && ch == '\0')
		locate = &str[i];
	return ((char *)locate);
}
