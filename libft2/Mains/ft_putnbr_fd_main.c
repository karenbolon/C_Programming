/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:56:11 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/22 13:59:54 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr_fd.c"

void	ft_putnbr_fd(int nu, int fd);

int	main(void)
{
	ft_putnbr_fd(-42, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(42, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
	write (1, "\n", 1);
	return (0);
}