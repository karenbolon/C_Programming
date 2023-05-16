/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:33:52 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/16 15:17:51 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"
#include <stdlib.h> 
#include <string.h>
#include <stdio.h>

char **ft_split(char const *s, char c)
{
	char	**p;
	size_t	count;
	char	*tmp;
	char	*last_delim;
	char delim[2];
    
	delim[0] = c;
    delim[1] = 0;
	p = (char **)malloc((sizeof(char *) * count);
	count = 0;
	tmp = s;
	last_delim = 0;
	while (*tmp)
	{
		if (c == *tmp)//counts # of delimiters
		{
				count++;
				last_delim = tmp; //make it equal to the end of the string
		}
		tmp++; //loop through the letters that are b/n delimiters but not counting
	}
	/* Add space for trailing token. */
	count += last_comma < (s + strlen(s) - 1);
	count++; //add space for null terminator

	if (p == NULL)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		p[0][i] = s[i];
		i++;
	}	
	if (s[i] == c)
		i++;
	p[0][i] = '\0';
	while (s[i])
		p[1][j++] = s[i++];
	p[1][i] = '\0';
	return (p);
}

#include <stdio.h>

int main(void)
{
	const char *s = "Hello,World";
	char **result = ft_split(s, ',');

	printf("Split string 1: %s\n", result[0]);
	printf("Split string 2: %s\n", result[1]);

	free(result[0]);
	free(result[1]);
	free(result);

	return 0;
}