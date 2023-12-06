/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:35:22 by mohimi            #+#    #+#             */
/*   Updated: 2023/12/03 09:25:33 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hexa_upper(unsigned int n)
{
	int		count;
	char	*symb;

	count = 0;
	symb = "0123456789ABCDEF";
	if (n < 16)
	{
		ft_putchar(symb[n]);
		count++;
	}
	else
	{
		count += ft_put_hexa_upper(n / 16);
		ft_putchar(symb[n % 16]);
		count++;
	}
	return (count);
}

int	ft_put_hexa(unsigned int n, char c)
{
	int		count;
	char	*symb;

	if (c == 'X')
		return (ft_put_hexa_upper(n));
	count = 0;
	symb = "0123456789abcdef";
	if (n < 16)
	{
		ft_putchar(symb[n]);
		count++;
	}
	else
	{
		count += ft_put_hexa(n / 16, c);
		ft_putchar(symb[n % 16]);
		count++;
	}
	return (count);
}
