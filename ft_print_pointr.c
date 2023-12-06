/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:13:13 by mohimi            #+#    #+#             */
/*   Updated: 2023/12/02 22:12:39 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointr(unsigned long n)
{
	int		count;
	char	*symb;

	count = 0;
	symb = "0123456789abcdef";
	if (n < 16)
	{
		ft_putchar(symb[n]);
		count++;
	}
	else
	{
		count += ft_print_pointr(n / 16);
		ft_putchar(symb[n % 16]);
		count++;
	}
	return (count);
}
