/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:39:09 by kbolon            #+#    #+#             */
/*   Updated: 2023/08/08 12:12:45 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_line(int fd, char *line)
{
	char	*buf;
	ssize_t	chars_read;

	buf = (char *)malloc(BUFFER_SIZE + 1);
	if (!buf)
	{
		free(line);
		return (NULL);
	}
	chars_read = 1;
	while (!ft_strchr(line, '\n') && chars_read != 0)
	{
		chars_read = read(fd, buf, BUFFER_SIZE);
		if (chars_read == -1)
		{
			free(buf);
			free(line);
			return (NULL);
		}
		buf[chars_read] = '\0';
		line = ft_strjoin(line, buf);
	}
	free(buf);
	return (line);
}

char	*new_line(char *line)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	if (!line[i])
	{
		free(line);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(line) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (line[i])
		str[j++] = line[i++];
	str[j] = '\0';
	free(line);
	return (str);
}

char	*ft_get_next_line(char *line)
{
	int		i;
	char	*str;

	i = 0;
	if (!line[i])
		return (NULL);
	while (line[i] && line[i] != '\n')
		i++;
	str = (char *)malloc(i + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (line[i] && line[i] != '\n')
	{
		str[i] = line[i];
		i++;
	}
	if (line[i] == '\n')
	{
		str[i] = line[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*get_next_line(int fd)
{
	static char			*line;
	char				*next_line;

	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	line = ft_get_line(fd, line);
	if (!line)
		return (NULL);
	next_line = ft_get_next_line(line);
	line = new_line(line);
	return (next_line);
}

/*int	main(void)
{
	int	fd;
	char	*test;
	
	fd = open("dolly.txt", O_RDONLY);
	//while(1)
	{
			test = get_next_line(42);
			printf("%s", test);	
			test = get_next_line(42);
			printf("%s", test);	
			//if (fd <= 0)
			//	break;
			free(test);
	}
	// printf("%s", get_next_line(fd));
	close(fd);
	return (0);
}*/
