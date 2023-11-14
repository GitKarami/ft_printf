/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kchahmi <kchahmi@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 15:18:07 by kchahmi       #+#    #+#                 */
/*   Updated: 2023/11/14 17:57:01 by kchahmi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char str, int *result)
{
	write(1, &str, 1);
	*(result) += 1;
}
