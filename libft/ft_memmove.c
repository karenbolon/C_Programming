/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:56:48 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/10 15:09:43 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dst;
	const char	*s;

	dst = dest;
	s = src;
	if (dst > s)
	{
		dst += n;
		s += n;
		while (n--)
			*(--dst) = *(--s);
	}
	else if (dst < s)
	{
		while (n--)
			*(dst++) = *(s++);
	}
	return (dest);
}
