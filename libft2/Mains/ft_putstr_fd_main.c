/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:00:43 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/16 12:01:11 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr_fd.c"

void ft_putstr_fd(char *s, int fd);

int main(void)
{
	char *message = "This works!";
	int fileDescriptor = STDOUT_FILENO;  // Use STDOUT_FILENO for standard output (console)

	ft_putstr_fd(message, fileDescriptor);

	return 0;
}