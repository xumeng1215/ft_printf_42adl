/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charlie|| <charlie_xumeng@hotmail.co>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:49:08 by charlie||         #+#    #+#             */
/*   Updated: 2024/03/26 11:49:27 by charlie||        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_args(char c, va_list args)
{
	if (c == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (c == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (c == 'u')
		return (ft_print_unsigned_int(va_arg(args, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), (('x' - c) / 32)));
	else if (c == '%')
		return (ft_print_char('%'));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			count += ft_put_args(*(str + 1), args);
			str++;
		}
		else
			count += write(1, str, 1);
		str++;
	}
	va_end(args);
	return (count);
}

/*
int main()
{
	
	printf("%ld\n", LONG_MAX);
	printf("%lx\n", LONG_MAX);
	ft_printf("%x", LONG_MAX);
}
*/