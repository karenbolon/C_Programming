/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:31:06 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/15 15:32:06 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strtrim.c"
#include <stdio.h>




char	*ft_strtrim(char const *s1, char const *set);

int main(void)
{
    const char *s1 = "abcdefgab";
    const char *set = "ab";
    char *result = ft_strtrim(s1, set);

    printf("Trimmed string: %s\n", result);
    free(result); // Free the allocated memoru
    return (0);
}
