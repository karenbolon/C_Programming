/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:21:59 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/22 18:10:35 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*trim_string(const char *s1, size_t start, size_t end)
{
	size_t	i;
	size_t	len;
	char	*trimmed;

	i = 0;
	if (start > end)
		return (ft_strdup(""));
	len = end - start + 1;
	trimmed = (char *)malloc(sizeof(char) * (len + 1));
	if (trimmed == 0)
		return (0);
	trimmed[len] = '\0';
	while (i < len)
	{
		trimmed[i] = s1[start++];
		i++;
	}
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	start = 0;
	if (s1 == 0 || set == 0)
		return (0);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	trimmed = trim_string(s1, start, end);
	return (trimmed);
}
