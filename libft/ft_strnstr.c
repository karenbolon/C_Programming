/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:22:03 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/12 16:06:30 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little == NULL || len == 0)
		return (NULL);
	if (little[j] == '\0')
		return ((char *) big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			while (little[j] != '\0' && big[i + j] == little[j] \
			&& (i + j) < len)
				j++;
		}
		if (little[j] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
