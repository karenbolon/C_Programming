/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:22:37 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/22 12:23:15 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_split.c"

char **ft_split(char const *s, char c);

int main()
{
    char **words = ft_split("This is a string.", ' ');

    if (words)
    {
        int i = 0;
        while (words[i] != (0))
        {
            printf("%s\n", words[i]);
            free(words[i]);
            i++;
        }
        free(words);
    }

    return (0);
}