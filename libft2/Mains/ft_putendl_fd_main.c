/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:54:58 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/22 14:19:20 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putendl_fd.c"

void ft_putendl_fd(char *s, int fd);

int	main (void)
{
//	char	*s = "This is a string!";
	
	ft_putendl_fd("lorem ipsum dolor sit amet", 2);
	return(0);
}