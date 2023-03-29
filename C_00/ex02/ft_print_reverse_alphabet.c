/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:25:51 by kbolon            #+#    #+#             */
/*   Updated: 2023/03/22 16:04:00 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ch;

	ch = 122;
	while (ch >= 97)
	{
		write(1, &ch, 1);
		--ch;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}*/
