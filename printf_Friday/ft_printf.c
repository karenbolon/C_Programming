/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:37:41 by kbolon            #+#    #+#             */
/*   Updated: 2023/06/02 14:56:23 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "libftprintf.h"

/* initialise the struct, set everything to 0 or false */

t_print	*ft_initialise_tab(t_print *tab)
{
	tab->wdt = 0;
	tab->prc = 0;
	tab->zero = 0;
	tab->pnt = 0;
	tab->sign = 0;
	tab->tl = 0;
	tab->is_zero = 0;
	tab->dash = 0;
	tab->perc = 0;
	tab->sp = 0;
	return (tab);
}

int	ft_printf(const char *fmt, ...)
{
	int		i;
	int		ret;
	t_print *tab;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab) /* return error if empty */
		return (-1);
	ft_initialise_tab(tab);
	va_start(tab->args, fmt);
	i = -1;
	ret = 0;
	while (fmt[++i]) /* while the string exists */
	{
		if (format[i] == '%') /* if the current char is % */
			i = ft_eval_fmt(tab, fmt, i + 1); /* evaluate format, i + 1 b/c we evaluate the char after the % */
		else
			ret += write (1, &format[i], 1); /* print what you read */
	}
	va_end(tab->args);
	ret += tab->tl;
	free (tab);
	return (ret);
}

/* this fcn reads the string to evaluate which format to use.  It checks that
the placeholders*/
int	ft_eval_fmt(t_print, *fmt, int c)
{
	int	pos;

	pos = 0;
	while (fmt[pos] != '\0' && fmt[pos] != 'i' && fmt[pos] != 'u' && fmt[pos] != 'd' && \
		fmt[pos] != 'c' && fmt[pos] != 's' && fmt[pos] != 'p' \
		&& fmt[pos] != 'x' && fmt[pos] != 'X' && fmt[pos] != '%')
		{
		if (fmt[pos] == '.')
		{
			tab->pnt = 1; /* we set it to true, 1*/
			pos++;
		}
		if (fmt[pos] == '-')
		{
			tab->dash = 1;
			pos++;
		}	
		if (fmt[pos] == ' ')
		{
			tab->sp = 1;
			pos++;
		}
		if (fmt[pos] == 0)
		{
			tab->zero = 1; //possibly should be is_zero??
			pos++;
		}
		if (fmt[pos] == '+')
		{
			tab->sign = 1;
			pos++;
		}
	}
}


	