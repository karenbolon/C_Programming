/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:28:45 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/26 13:58:22 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (*s++ == c)
		{
			if (word)
			{
				++count;
				word = 0;
			}
		}
		else
			++word;
	}
	if (word)
		++count;
	return (count);
}

static char	*get_word(const char *s, int *size)
{
	char	*word;

	word = ft_substr(s, 0, *size);
	*size = 0;
	return (word);
}

static void	graciously_exit(char **spl, int i)
{
	while (i--)
		free(spl[i]);
	free(spl);
}

char	**ft_split(const char *s, char c)
{
	char	**spl;
	int		count;
	int		word;
	int		i;

	count = count_words(s, c);
	spl = malloc(sizeof(char *) * (count + 1));
	if (!spl)
		return (0);
	i = 0;
	word = 0;
	while (i < count)
	{
		if ((*s == c || !*s) && word)
		{
			spl[i] = get_word(s - word, &word);
			if (!spl[i++])
				return (graciously_exit(spl, i), (char **) 0);
		}
		else if (*s != c)
			++word;
		++s;
	}
	spl[i] = 0;
	return (spl);
}
