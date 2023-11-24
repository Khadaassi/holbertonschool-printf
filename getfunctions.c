#include "main.h"

/**
 * get_function - find the appropriate print function for the specifier
 * @specifier: the conversion specifier to find the handler for
 * @arguments: the va_list containing the arguments
 * Return: the number of characters printed by the handler function (2)
 */
int get_function(const char specifier, va_list arguments)
{
	int index_array = 0;

	format_handler array[] = {
		{'c', print_character},
		{'s', print_string},
		{'%', print_percentage},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}
	};

	while (array[index_array].specifier != '\0')
	{
		if (specifier == array[index_array].specifier)
		{
			return (array[index_array].function(arguments));
		}

		index_array++;
	}
	_putchar('%');
	_putchar(specifier);

	return (2);
}
