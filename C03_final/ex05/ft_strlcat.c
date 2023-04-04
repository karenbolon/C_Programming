/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:53:02 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/30 13:14:17 by kbolon           ###   ########.fr       */
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
	dest[i + j - 1] = '\0';
	return (i + j);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char	src[10] = "def";
	char	dest[10] = "abc";

    printf("ft_strcat: %u | %s\n", ft_strlcat(dest, src, 6), dest);

    char    src1[10] = "def";
	char	dest1[10] = "abc";

	printf("strlcat: %zu | %s", strlcat(dest1, src1, 6), dest1);
	return (0);
}*/
