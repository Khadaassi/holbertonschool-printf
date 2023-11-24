#include "main.h"
/**
 * _print_character - Prints a single character to stdout.
 * @c: The character to be printed.
 *
 * Return: The number of characters printed (always 1).
 */

int print_character(va_list arguments)

{
	char c = va_arg(arguments, int);

	return (_putchar(c));
}
