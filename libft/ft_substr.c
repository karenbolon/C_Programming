/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:58:52 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/22 17:49:23 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    if (!s)
        return (0);
    size_t slen = ft_strlen(s);
    if (start >= slen)
        return (ft_strdup(""));
    if (len > slen - start)
        len = slen - start;
    char *new = malloc(sizeof(char) * (len + 1));
    if (!new)
		return (0);
	ft_strlcpy(new, (char *)(s + start), len + 1);
	new[len] = '\0';
    return (new);
}
