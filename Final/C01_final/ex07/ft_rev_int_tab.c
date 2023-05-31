/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:02:21 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/23 19:23:16 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
[size - 1 - i]: size is 5, array indices start at 0 so we have to subract 1.
Then subtract i to get the index of the element i positions away from 
the end of the array.*/
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[5] = {3, 4, 5, 6, 7};
	int	size;

	size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}*/
