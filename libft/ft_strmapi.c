/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:05:47 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/20 18:59:34 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	len;
	int		i;

	i = 0;
	if (s == 0)
		return (0);
	len = ft_strlen(s);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == 0)
		return (0);
	p[len] = '\0';
	while (s[i] != '\0')
	{
		p[i] = (*f)(i, s[i]);
		i++;
	}
	return (p);
}
