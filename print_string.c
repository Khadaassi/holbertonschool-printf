
#include "main.h"
/**
 * print_string - Prints a string to stdout.
 * @s: The string to be printed.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list arguments)

{
	char *string = va_arg(arguments, char *);
	char *null = "(null)";
	int length = 0;

	if (string == NULL)
	{
		/* print "(null)" and return the number of characters printed (6) */
		return (write(1, null, 6));
	}

	while (*string != '\0')
	{
		_putchar(*string);
		string++;

		length++;
	}

	return (length);
}
