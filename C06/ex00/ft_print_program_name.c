/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:32:40 by kbolon            #+#    #+#             */
/*   Updated: 2023/04/03 17:41:44 by kbolon           ###   ########.fr       */
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

	i = 0;
	if (argc < 1)
		return (0);
	while (argv[0][i] != '\0')
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
