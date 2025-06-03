/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:31:15 by wheino            #+#    #+#             */
/*   Updated: 2025/06/03 15:37:49 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int		chars_written;

	chars_written = 0;
	va_start(ap, format);
	while(*format != '\0')
	{
		if(*format == '%')
		{
			chars_written += handle_format(*(++format), ap);
		}
		else
		{
			write(1, &format, 1);
			chars_written++;
		}
		format++;
	}
	va_end(ap);
	return (chars_written);
}