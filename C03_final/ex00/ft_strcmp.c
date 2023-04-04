/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:42:29 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/28 12:45:35 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main ()
{
	char	str1[] = "think";
	char	str2[] = "this works";
	char	str3[] = "think";

	printf("Comparison 2 diff with my ft: %d\n", ft_strcmp(str1, str2));
	printf("Comparison 2 diff with real ft: %d\n", strcmp(str1, str2));
    printf("Comparison (same) my ft: %d\n", ft_strcmp(str1, str3));
    printf("Comparison (same) real ft: %d\n", strcmp(str1, str3));
    printf("Comparison 2 diff my ft: %d\n", ft_strcmp(str2, str1));
    printf("Comparison 2 diff real ft: %d\n", strcmp(str2, str1));
}*/
