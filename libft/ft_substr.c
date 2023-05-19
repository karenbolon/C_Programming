/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:58:52 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/17 18:18:24 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <unistd.h>
#include "ft_strlen.c"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str);*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (!s) 
		return (0);
	if (start < s_len)
		i = s_len - start;
	if (i > len)
		i = len;
	p = (char *) malloc (sizeof(char) * (i + 1));
	if (!p)
		return (0);
	while (i > 0)
	{
		p[i - 1] = s[start + i - 1];
		i--;
	}
	p[len] = '\0';
	return (p);
}
/*
int		main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;
	
	strsub = ft_substr(str, 0, 10);
    printf("%s\n", strsub);
    free(strsub);

    strsub = ft_substr(str, 7, 10);
    printf("%s\n", strsub);
    free(strsub);

    strsub = ft_substr(str, 7, 0);
    printf("%s\n", strsub);
    free(strsub);

    strsub = ft_substr(str, 0, 0);
    printf("%s\n", strsub);
    free(strsub);

    strsub = ft_substr(str, 400, 20);
    printf("%s\n", strsub);
    free(strsub);

	return (0);
}*/
