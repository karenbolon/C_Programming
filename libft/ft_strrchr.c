/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:14:24 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/16 09:39:56 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (s)
	{
		while (s[i] != (char)c && i >= 0)
			i--;
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		else
			return (NULL);
	}
	return (NULL);
}	
