/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charlie|mexu <charlie_xumeng@hotmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:13:01 by charlie|mexu      #+#    #+#             */
/*   Updated: 2024/03/27 10:13:04 by charlie|mexu     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	int			count;
	long int	num;

	count = 0;
	num = n;
	if (num < 0)
	{
		count += ft_print_char('-');
		num = -1 * num;
	}
	if (num < 10)
		count += ft_print_char(num + '0');
	else
	{
		count += ft_print_int(num / 10);
		count += ft_print_char(num % 10 + '0');
	}
	return (count);
}

int	ft_print_unsigned_int(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 10)
		count += ft_print_char(n + '0');
	else
	{
		count += ft_print_int(n / 10);
		count += ft_print_char(n % 10 + '0');
	}
	return (count);
}
