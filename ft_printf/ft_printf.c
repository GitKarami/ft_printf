/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kchahmi <kchahmi@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 13:16:16 by kchahmi       #+#    #+#                 */
/*   Updated: 2023/11/14 18:04:18 by kchahmi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_parse(const char *format, va_list argv, int *result)
{
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				(ft_putchar(va_arg(argv, int), result));
			else if (*format == 's')
				(ft_putstr(va_arg(argv, char*), result));
			else if (*format == 'p')
				(ft_puthex(va_arg(argv, unsigned long), result));
			else if (*format == 'd' && *format == 'i')
				(ft_putnbr(va_arg(argv, int), result));	
			else if (*format == 'u')
				(ft_putuint(va_arg(argv, unsigned int), result));
			else if (*format == 'x' && *format == 'X')
				(ft_puthex(va_arg(argv, unsigned long), result));
			else if (*format == '%')
				(ft_putchar(va_arg(argv, int), result));
		}
		else
			ft_putchar(*format, result);
		format++;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	argv;
	va_start(argv, format);
	int result;

	result = 0;
	ft_parse(format, argv, &result);
	va_end(argv);
	return (result);
}
