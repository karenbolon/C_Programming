/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:54:03 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/17 11:55:19 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

size_t	ft_strlen(const char *s);

int main()
{
	//test size = 0
    char    src[10] = "xyz";
    char    dest[10] = "abc";
    char    src1[10] = "xyz";
    char    dest1[10] = "abc";

    printf("dest, ft_strcat: %zu | %s\n", ft_strlcat(dest, src, 0), dest);
    printf("dest1, strlcat: %zu | %s\n", strlcat(dest1, src1, 0), dest1);

//	test src + dst < size - 1
    char    src2[10] = "xyz";
    char    dest2[10] = "abc";
    char    src3[10] = "xyz";
    char    dest3[10] = "abc";

    printf("dest2, ft_strcat: %zu | %s\n", ft_strlcat(dest2, src2, sizeof(dest2)), dest2);
    printf("dest3, strlcat: %zu | %s\n", strlcat(dest3, src3, sizeof(dest3)), dest3);

//	test src = 0
	char    src4[10] = "";
    char    dest4[10] = "abc";
    char    src5[10] = "";
    char    dest5[10] = "abc";
    printf("dest4, ft_strcat: %zu | %s\n", ft_strlcat(dest4, src4, sizeof(dest4)), dest4);
    printf("dest5, strlcat: %zu | %s\n", strlcat(dest5, src5, sizeof(dest5)), dest5);

//	test dst = 0
	char    src6[10] = "xyz";
    char    dest6[10] = "";
    char    src7[10] = "xyz";
    char    dest7[10] = "";

    printf("dest6, ft_strcat: %zu | %s\n", ft_strlcat(dest6, src6, sizeof(dest6)), dest6);
    printf("dest7, strlcat: %zu | %s\n", strlcat(dest7, src7, sizeof(dest7)), dest7);
    return (0);
}