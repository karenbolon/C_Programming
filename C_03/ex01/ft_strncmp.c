/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:49:12 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/28 13:44:03 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]) && (i < n))
	{
		i++;
	}
	if (1 == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char	s1[] = "What a day!";
	char	s2[] = "Today is the best!";
	printf("Comparison with my ft: %d\n", ft_strncmp(s1, s2, 5));
	printf("Comparison with actual ft: %d\n", strncmp(s1, s2, 5));
}*/
