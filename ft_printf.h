/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:20:48 by mohimi            #+#    #+#             */
/*   Updated: 2023/12/02 21:43:42 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_putnbr(long n);
int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_print_format(char specif, va_list ap);
int		ft_print_pointr(unsigned long n);
int		ft_put_hexa(unsigned int n, char c);
int		ft_print_udecimal(unsigned int n);

#endif