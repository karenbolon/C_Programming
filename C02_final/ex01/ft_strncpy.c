/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:10:21 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/25 19:02:50 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "Help me!";
	char dest[] = "Please???";
	char dest1[] = "Hello??";

	printf("%s", ft_strncpy(dest, src, 3));
	printf("\n%s", strncpy(dest, src, 3));
	printf("\n%s", ft_strncpy(dest1, src, 7));
	printf("\n%s", strncpy(dest1, src, 7));
	return (0);
}*/
