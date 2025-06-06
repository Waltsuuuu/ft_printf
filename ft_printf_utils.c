/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:31:04 by wheino            #+#    #+#             */
/*   Updated: 2025/06/06 17:06:15 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	print_signed(int n)
{
	int chars_written;

	chars_written = 0;
	if (n == -2147483648)
	{
		chars_written = write(1, "-2147483648", 11);
		if (chars_written < 1)
			return (-1);
		else
			return (chars_written);
	}
	if (n < 0)
	{
		chars_written += write(1, "-", 1);
		if (chars_written < 1)
			return (-1);
		n = -n;
	}
	chars_written += print_unsigned(n);
	return (chars_written);
}

int	print_unsigned(unsigned int n)
{
	char	digit;
	int		chars_written;
	
	chars_written = 0;
	if (n > 9)
		chars_written = print_unsigned(n / 10);
	digit = n % 10 + '0';
	if (write(1, &digit, 1) < 1)
		return (-1);
	return (chars_written + 1);
}

int print_hex(int n, char specifier)
{
	char *hex_digits;
	

	if (specifier == 'x')
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	if (n == 0)
		write(1, "0", 1);
	while (n > 0)
	{
		
	}
}