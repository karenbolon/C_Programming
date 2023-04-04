/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:19:43 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/28 14:41:01 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* This function copies the specified 'n' number of characters from source to
destination.  If the destination is not long enough, it will use the source
to continue.  And end with null*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(src);
	if (size != 0)
	{
		while ((src[i] != '\0') && (i < size))
		{
			dest[i] = src [i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
/*
#include <stdio.h>

int	main()
{
	char	src[] = "Hello!";
	char	dest[] = "abcdefgthi";
	printf("%d | %s", ft_strlcpy(dest, src, 6), dest);
}*/
