/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:33:33 by kbolon            #+#    #+#             */
/*   Updated: 2023/06/02 15:26:01 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>

typedef	struct s_print
{
	va_list	args; /* args to print out */
	int		wdt; /* width 0 - 9*/
	int		prc; /* precision */
	int		zero; /* zero padding */
	int		pnt; /* point */
	int		dash; /* - or minus */
	int		tl; /* total length (return value) */
	int		sign; /* pos or neg number */
	int		is_zero; /* is the number zero? */
	int		perc; /* is the number a % */
	int		sp; /* space flag ' ' */
}	t_print;



#endif