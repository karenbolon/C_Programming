/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:48:31 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/16 09:36:24 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_strlen.c"

//size_t	ft_strlen(const char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	size_t	j;

	p = malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (p == NULL)
		return (NULL);
	while ((i + j) < (ft_strlen(s1) + ft_strlen(s2) - 1))
	{
		while (i < ft_strlen(s1) - 1)
		{
			p[i] = s1[i];
			i++;
		}	
		while (j < ft_strlen(s2))
			p[i++] = s2[j++];
	}
	p[i + j] = '\0';
	return (p);
}
