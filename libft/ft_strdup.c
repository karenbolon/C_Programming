/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:42:25 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/12 16:51:27 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s);
	p = malloc (j + 1);
	if (p == NULL)
		return (NULL);
	while (i < j)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
