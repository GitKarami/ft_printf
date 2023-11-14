/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kchahmi <kchahmi@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 15:19:19 by kchahmi       #+#    #+#                 */
/*   Updated: 2023/11/14 17:42:47 by kchahmi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
void	ft_parse(const char *format, va_list argv, int *result);
void ft_putchar(char str, int *result);
void ft_puthex(unsigned int hex, int *result);
void ft_putnbr(int n, int *result);
void ft_putstr(const char *str, int *result);
void ft_putuint(unsigned int uint, int *result);
void ft_putptr(unsigned long ptr, int *result);

#endif