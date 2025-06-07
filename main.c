/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wheino <wheino@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:26:56 by wheino            #+#    #+#             */
/*   Updated: 2025/06/07 16:06:20 by wheino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h> //For variadic args
#include <stdio.h> //Printf
#include <unistd.h>
#include <string.h>
#include "ft_printf.h"
#include <limits.h>

int	main()
{
	int count;

	count = 0;
	
	// // %c Prints a single character
	// char a = 'A';
	// printf("\nTEST #1\nPrint the character 'A', chars written = 1:\n");
	// count = ft_printf("%c", a);
	// printf("\nChars written = %d\n", count);

	// char b = 'B';
	// printf("\nTEST #2\nPrint the character 'A' and 'B', chars written = 2:\n");
	// count = ft_printf("%c%c", a, b);
	// printf("\nChars written = %d\n", count);
	
	// // %s Prints a string
	// char *str = "Hello World";
	// printf("\nTEST#2\nPrint the string \"Hello World\", chars written = 11\n");
	// count = ft_printf("%s", str);
	// printf("\nChars written = %d\n", count);

	// // %s Prints a string
	// printf("\nNULL %s NULL\n", NULL);
	// count = ft_printf("NULL %s NULL", NULL);
	// printf("\nChars written = %d\n", count);
	
	// // %d Prints a decimal (base 10) number.
	// int decimal = -214;
	// printf("\nTEST#3\nPrint the decimal number -214, chars written = 4\n");
	// printf("\nReal printf output == %d\n", decimal);
	// count = ft_printf("%d", decimal);
	// printf("\nChars written = %d\n", count);

	// // %i Prints an integer in base 10.
	// int integer = 3456;
	// printf("\nTEST#4\nPrint the integer 3456, chars written = 4\n");
	// printf("\nReal printf output == %i\n", integer);
	// count = ft_printf("%i", integer);
	// printf("\nChars written = %d\n", count);
	
	// // %u Prints an unsigned decimal (base 10) number.
	// unsigned int unsigned_decimal = 214;
	// printf("\nTEST#4\nPrint the unsigned decimal 214, chars written = 3\n");
	// printf("\nReal printf output == %u\n", unsigned_decimal);
	// count = ft_printf("%u", unsigned_decimal);
	// printf("\nChars written = %d\n", count);

	// // %% Prints a percent sign.
	// printf("\nTEST#4\nPrint a percent sign '%%'\n");
	// printf("\nReal printf with a percent sign, no trailing characters == %%");
	// printf("\nReal printf with a percent sign, WITH trailing characters == %%///\n\n");
	// count = ft_printf("Percent sign, no trailing chacracters = %%");
	// printf("\nChars written = %d\n", count);
	// count = ft_printf("Percent sign, WITH trailing characters = %%///");
	// printf("\nChars written = %d\n", count);

	// // %x Prints a number in hexadecimal (base 16) lowercase format.
	// printf("\nTEST#5\nPrint int 689 as a lowercase hexadecimal\n");
	// printf("\nReal printf output == %x\n", -55);
	// count = printf("%x", -55);
	// printf("\nChars written = %d", count);

	// // %X Prints a number in hexadecimal (base 16) UPPERCASE format.
	// printf("\nTEST#6\nPrint int 689 as a uppercase hexadecimal\n");
	// printf("\nReal printf output == %X\n", 689);
	// count = printf("%X", 689);
	// printf("\nChars written = %d", count);

	// %p The void * pointer argument has to be printed in hexadecimal format.
	// char *p = "blah";
	printf("\nTEST#7\nPrint pointer in hexadecimal format\n");
	// printf("\nReal printf output == %p\n", LONG_MAX);
	count = ft_printf("%p", LONG_MAX);
	printf("\nChars written = %d", count);
	
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
// OK - %d Prints a decimal (base 10) number.
// OK - %i Prints an integer in base 10.
// OK - %u Prints an unsigned decimal (base 10) number.
// OK - %% Prints a percent sign.
// OK - %x Prints a number in hexadecimal (base 16) lowercase format.
// OK - %X Prints a number in hexadecimal (base 16) uppercase format.
// %p The void * pointer argument has to be printed in hexadecimal format.
