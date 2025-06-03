/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:26:56 by wheino            #+#    #+#             */
/*   Updated: 2025/06/03 15:41:59 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h> //For variadic args
#include <stdio.h> //Printf
#include <unistd.h>
#include <string.h>
#include "ft_printf.h"

int	main()
{

	printf("Test 1 count = %d\n\n)", ft_printf("Print decimal (digit) = %d\n", 99));
	ft_printf("Char = %c\n", 'A');
	return 0;
}


// Loop through the "format" string
// Print each character
// If character is a format specifier (%), skip it
// - - Get the character after the format specifier
// - - Send char to check_format()
// - - - - If d, print next arguement as a int
// - - - - If s, print next arguement as a string
// - - - - ....
//  


// %c Prints a single character.
// %s Prints a string (as defined by the common C convention).
// %p The void * pointer argument has to be printed in hexadecimal format.
// %d Prints a decimal (base 10) number.
// %i Prints an integer in base 10.
// %u Prints an unsigned decimal (base 10) number.
// %x Prints a number in hexadecimal (base 16) lowercase format.
// %X Prints a number in hexadecimal (base 16) uppercase format.
// %% Prints a percent sign.