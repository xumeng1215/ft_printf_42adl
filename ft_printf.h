/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charlie|| <charlie_xumeng@hotmail.co>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:49:49 by charlie||         #+#    #+#             */
/*   Updated: 2024/03/26 22:15:51 by charlie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

unsigned int	ft_strlen2(const char *s);
int				ft_printf(const char *format, ...);
int				ft_put_args(char c, va_list args);

int				ft_print_char(char c);
int				ft_print_str(char *s);
int				ft_print_ptr(void *p);
int				ft_print_hex(unsigned long n, int i);
int				ft_print_int(int n);
int				ft_print_unsigned_int(unsigned int n);

#endif/*libftprintf.h*/
