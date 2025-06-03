/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:30:38 by wheino            #+#    #+#             */
/*   Updated: 2025/06/03 15:37:08 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h> //For variadic args
#include <stdio.h> //For real Printf (TESTING)
#include <unistd.h> //For write
#include <string.h>

int	ft_printf(const char *format, ...);
int	handle_format(char specifier, va_list ap);


#endif
