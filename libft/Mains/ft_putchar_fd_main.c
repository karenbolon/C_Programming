/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:52:18 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/16 11:52:48 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar_fd.c"

void ft_putchar_fd(char c, int fd);

int main(void)
{
	char character = 'A';
	int fileDescriptor = STDOUT_FILENO;  // Use STDOUT_FILENO for standard output (console)

	ft_putchar_fd(character, fileDescriptor);

	return 0;
}