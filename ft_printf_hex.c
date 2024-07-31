/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charlie|mexu <charlie_xumeng@hotmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:13:14 by charlie|mexu      #+#    #+#             */
/*   Updated: 2024/03/27 10:13:16 by charlie|mexu     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long n, int capital)
{
	char	*set;
	int		count;

	set = "0123456789abcdef0123456789ABCDEF";
	count = 0;
	if (n < 16)
		count = ft_print_char(set[n + capital * 16]);
	else
	{
		count += ft_print_hex(n / 16, capital);
		count += ft_print_char(set[n % 16 + capital * 16]);
	}
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	int				count;
	unsigned long	address;

	count = 0;
	address = (unsigned long)ptr;
	count += ft_print_str("0x");
	count += ft_print_hex(address, 0);
	return (count);
}
