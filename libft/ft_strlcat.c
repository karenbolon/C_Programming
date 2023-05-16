/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:05:07 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/16 15:42:04 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
//#include "ft_strlen.c"

//size_t strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
	{
		i++;
	}
	while ((i < (size - 1)) && (src[j] != '\0'))
	{
		dst[i + j] = src [j];
		j++;
	}
	dst[i + j - 1] = '\0';
	return (i + j);
}

/*
int main()
{
    char    src[10] = "xyz";
    char    dest[10] = "abc";

    printf("ft_strcat: %zu | %s\n", ft_strlcat(dest, src, 0), dest);

    char    src1[10] = "xyz";
    char    dest1[10] = "abc";

    printf("strlcat: %zu | %s\n", strlcat(dest1, src1, 0), dest1);
    return (0);
}*/