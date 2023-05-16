/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:21:59 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/16 09:30:58 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include "ft_strlen.c"
#include <stdlib.h> 
#include <string.h>
#include <stdio.h>
#include "ft_strchr.c"

size_t	ft_strlen(const char *str);

char	*ft_strchr(const char *str, int ch);*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*p;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	p = malloc(len - i + 1);
	if (p == NULL)
		return (NULL);
	if (s1[i] == set[i])
		i++;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (len > i && ft_strchr(set, s1[len]) != NULL)
		len--;
	while (i <= len)
	{
		p[j] = s1[i];
		i++;
		j++;
	}
	p[j] = '\0';
	return (p);
}
