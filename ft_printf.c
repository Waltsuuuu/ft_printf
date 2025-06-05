/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:31:15 by wheino            #+#    #+#             */
/*   Updated: 2025/06/05 17:32:05 by wheino           ###   ########.fr       */
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
