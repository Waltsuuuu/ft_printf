/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:26:56 by wheino            #+#    #+#             */
/*   Updated: 2025/06/05 17:34:06 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h> //For variadic args
#include <stdio.h> //Printf
#include <unistd.h>
#include <string.h>
#include "ft_printf.h"

int	main()
{
	int count;

	count = 0;
	
	// %c Prints a single character
	char a = 'A';
	printf("\nTEST #1\nPrint the character 'A', chars written = 1:\n");
	count = ft_printf("%c", a);
	printf("\nChars written = %d\n", count);

	char b = 'B';
	printf("\nTEST #2\nPrint the character 'A' and 'B', chars written = 2:\n");
	count = ft_printf("%c%c", a, b);
	printf("\nChars written = %d\n", count);
	
	// %s Prints a string
	char *str = "Hello World";
	printf("\nTEST#2\nPrint the string \"Hello World\", chars written = 11\n");
	count = ft_printf("%s", str);
	printf("\nChars written = %d\n", count);
	
	return 0;
}


// Things to remember
// If write fails or any other error occurs - Return value == -1.
// Check if input string is null.
 
// Loop through the "format" string
// Print each character
// If character is a format specifier (%), skip it
// - - Get the character after the format specifier
// - - Send char to check_format()
// - - - - If d, print next arguement as a int
// - - - - If s, print next arguement as a string
// - - - - ....
//  


// OK - %c Prints a single character.
// OK - %s Prints a string (as defined by the common C convention).
// %p The void * pointer argument has to be printed in hexadecimal format.
// %d Prints a decimal (base 10) number.
// %i Prints an integer in base 10.
// %u Prints an unsigned decimal (base 10) number.
// %x Prints a number in hexadecimal (base 16) lowercase format.
// %X Prints a number in hexadecimal (base 16) uppercase format.
// %% Prints a percent sign.