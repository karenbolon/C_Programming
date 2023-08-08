/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:25:59 by kbolon            #+#    #+#             */
/*   Updated: 2023/08/07 13:43:51 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_check_line(char *line)
{
	if (!line)
	{
		line = (char *)malloc(1 * sizeof(char));
		if (!line)
			return (NULL);
		line[0] = '\0';
	}
	return (line);
}

char	*ft_strjoin(char *line, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!line && !buff)
		return (NULL);
	line = ft_check_line(line);
	str = malloc(sizeof(char) * ((ft_strlen(line) + ft_strlen(buff)) + 1));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	if (line)
	{
		while (line[++i] != '\0')
			str[i] = line[i];
	}
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(line) + ft_strlen(buff)] = '\0';
	free(line);
	return (str);
}
