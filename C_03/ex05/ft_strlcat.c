/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:53:02 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/29 16:30:58 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while ((i < (size - 1)) && (src[j] != '\0'))
	{
		dest[i + j] = src [j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + j);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	unsigned int 	i;
	i = 6;

	char	src[] = "def";
	char	src1[] = "def";
	char	dest[10] = "abc";
	char	dest1[10] = "abc";

	printf("%u | %s\n", ft_strlcat(dest, src, i), dest);
	printf("%zu | %s", strlcat(dest1, src1, i), dest1);
}*/
