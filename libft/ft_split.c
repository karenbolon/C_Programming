/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:33:52 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/20 10:30:36 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char	**p;
	size_t	count;
	char	*tmp;
	char	*last_delim;
	char	delim[2];
    
	delim[0] = c;
    delim[1] = 0;
	p = (char **) malloc(sizeof(char *) * count);
	count = 0;
	tmp = s;
	last_delim = 0;
	while (*tmp)
	{
		if (c == *tmp)
		{
				count++;
				last_delim = tmp; 
		}
		tmp++;
	}
	count += last_comma < (s + strlen(s) - 1);
	count++;
	if (p == 0)
		return (0);
	while (s[i] && s[i] != c)
	{
		p[0][i] = s[i];
		i++;
	}	
	if (s[i] == c)
		i++;
	p[0][i] = '\0';
	while (s[i])
		p[1][j++] = s[i++];
	p[1][i] = '\0';
	return (p);
}
