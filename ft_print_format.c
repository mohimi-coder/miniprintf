/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:23:20 by mohimi            #+#    #+#             */
/*   Updated: 2023/12/06 10:36:20 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (specifier == '%')
		count += ft_putchar('%');
	else if (specifier == 'x' || specifier == 'X')
		count += ft_put_hexa(va_arg(args, unsigned int), specifier);
	else if (specifier == 'p')
	{
		count = ft_putstr("0x");
		count += ft_print_pointr(va_arg(args, unsigned long));
	}
	else if (specifier == 'u')
		count += ft_print_udecimal(va_arg(args, unsigned int));
	else
		count += write(1, &specifier, 1);
	return (count);
}
