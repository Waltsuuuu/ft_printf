/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:31:15 by wheino            #+#    #+#             */
/*   Updated: 2025/06/06 16:56:59 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list ap;
	int		chars_written;

	if (!str)
		return (-1);
	va_start(ap, str);
	chars_written = loop_str(str, ap);
	va_end(ap);
	return (chars_written);
}

int loop_str(const char *str, va_list ap)
{
	int	chars_written;
	
	chars_written = 0;
	while(*str != '\0')
	{
		if(*str == '%')
		{
			str++;
			if (*str != '\0')
				chars_written += handle_format(*str++, ap);
			if (chars_written < 0)
				return (-1);
		}
		else
		{
			if (write(1, str, 1) < 0)
				return (-1);
			chars_written++;
			str++;
		}
	}
	return (chars_written);
}

int	handle_format(char specifier, va_list ap)
{
	int		chars_written;
	
	chars_written = 0;
	if (specifier == 'c')
		chars_written = print_char(va_arg(ap, int));
	else if (specifier == 's')
		chars_written = print_str(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		chars_written = print_signed(va_arg(ap, int));
	else if (specifier == 'u')
		chars_written = print_unsigned(va_arg(ap, int));
	else if (specifier == 'x' || specifier == 'X')
		chars_written = print_hex(va_arg(ap, int), specifier);
	else if (specifier == '%')
		chars_written = print_char(specifier);
	
	if (chars_written > 0)
		return (chars_written);
	else
		return (0);
}
