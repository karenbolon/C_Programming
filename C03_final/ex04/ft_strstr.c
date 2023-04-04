/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:14:16 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/29 12:51:29 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*function iterates through each index of string and compares each index of 
to_find before moving on to next str[i].  It returns a pointer arithmetic
operation which returns the 1st character that comes after 1st character
in str.*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while ((str[i] != '\0') && (to_find[j] != '\0'))
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	str[] = "asbdhelpsf";
	char	to_find[] = "help";
	char    str1[] = "asbdhelpsf";
	char    to_find1[] = "help";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s", strstr(str1, to_find1));
}*/
