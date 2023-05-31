/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:49:12 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/30 13:12:31 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
		i++;
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char	s1[] = "abc";
	char	s2[] = "abc";
	char	s3[] = "abd";
	char	s4[] = "abc";
	char	s5[] = "abb";
	char	s6[] = "abc";
	printf("Comparison with my ft: %d\n", ft_strncmp(s1, s2, 5));
	printf("Comparison with actual ft: %d\n", strncmp(s1, s2, 5));
	printf("Comparison with my ft: %d\n", ft_strncmp(s3, s4, 5));
	printf("Comparison with actual ft: %d\n", strncmp(s3, s4, 5));
	printf("Comparison with my ft: %d\n", ft_strncmp(s5, s6, 5));
	printf("Comparison with actual ft: %d\n", strncmp(s5, s6, 5));
}*/
