/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:36:29 by kbolon            #+#    #+#             */
/*   Updated: 2023/04/04 12:42:27 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = argc - 1;
	if (argc < 2)
		return (0);
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i--;
		ft_putchar('\n');
	}
	return (0);
}
