/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:31:04 by wheino            #+#    #+#             */
/*   Updated: 2025/06/05 17:32:57 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int loop_str(const char *str, va_list ap)
{
	int	chars_written;
	
	chars_written = 0;
	while(*str != '\0')
	{
		if(*str == '%')
		{
			chars_written += handle_format(*(++str), ap);
			if (chars_written < 0)
				return (-1);
		}
		else
		{
			if (write(1, str, 1) < 0)
				return (-1);
			chars_written++;
		}
		str++;
	}
	return (chars_written);
}

int	handle_format(char specifier, va_list ap)
{
	int		chars_written;
	
	if (specifier == 'c')
		chars_written = print_char(va_arg(ap, int));
	else if (specifier == 's')
		chars_written = print_str(va_arg(ap, char *));
	
	if (chars_written > 0)
		return (chars_written);
	else
		return (0);
}

int	print_char(int c)
{
	char ch;

	ch = (char)c;
	if (write(1, &ch, 1) < 1)
		 return (-1);
	else
		return (1);
}

int	print_str(char *s)
{
	int	i;
	
	if (!s)
		return (-1);
	i = 0;
	while (s[i] != '\0')
	{
		if (write(1, &s[i], 1) < 0)
			return (-1);
		i++;
	}
	return (i);
}