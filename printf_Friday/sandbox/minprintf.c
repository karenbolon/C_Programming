/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minprintf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:21:19 by kbolon            #+#    #+#             */
/*   Updated: 2023/05/31 12:20:36 by kbolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

/* minprintf: minimal printf with variable argument list */

void	minprintf(char *fmt, ...)
{
	va_list ap; /* points to each unnamed arg in turn */
	char	*p;
	char	*sval;
	int		ival;
	double	dval;int main()
{
    int i = 42;
    double d = 3.14159;
    char str[] = "Hello, World!";

    minprintf("Integer: %d\n", i);
    minprintf("Double: %f\n", d);
    minprintf("String: %s\n", str);

    return 0;
}

	va_start(ap, fmt); /* make ap point to 1st unnamed arg */
	p = fmt;
	while (*p)
	{
		if (*p != '%')
		{
			putchar(*p);
			p++;
			continue;
		}
		p++; /* Move to the next character after '%' */
		if (*p == 'd')
		{
			ival = va_arg(ap, int);
			printf("%d", ival);
		}
		else if (*p == 'f')
		{
			dval = va_arg(ap, double);
			printf("%f", dval);
		}
		else if (*p == 's')
		{
			sval = va_arg(ap, char *);
			while (*sval)
			{
				putchar (*sval);
				sval++;
			}
		}
		else
			putchar(*p);
		p++; /* Move to the next format specifier or character */
	}
	va_end(ap); /* clean up when done */
}

int main()
{
    int i = 42;
    double d = 3.14159;
    char str[] = "Hello, World!";

    minprintf("Integer: %d\n", i);
    minprintf("Double: %f\n", d);
    minprintf("String: %s\n", str);

    return 0;
}