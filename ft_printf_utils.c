/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:31:04 by wheino            #+#    #+#             */
/*   Updated: 2025/06/03 15:39:56 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./Libft/libft.a"

int	handle_format(char specifier, va_list ap)
{
	char	*str;
	int		chars_written;

	if(specifier == 'c')
	{
		ft_putchar_fd(va_arg(ap, int), 1);
	}
	else if(specifier == 'd')
	{
		str = ft_itoa(va_arg(ap, int));
		if (!str)
			return (-1);
		chars_written = ft_strlen(str);
		ft_putstr_fd(str, 1);
		free(str);
		return (chars_written);
	}
	return (0);
}