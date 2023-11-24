#include "main.h"
/**
 * _printf - Prints formatted output to stdout.
 * @format: The format string containing placeholders.
 * @...: Variable number of arguments to be formatted and printed.
 *
 * Return: The total number of characters printed.
 */
int _printf(const char *format, ...)
{
	int index_format = 0;
	int total_length = 0;

	va_list arguments;

	va_start(arguments, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (format[index_format] != '\0')
	{
		if (format[index_format] == '%')
		{
			total_length += get_function(format[index_format + 1], arguments);

		index_format += 2;
		}
		else
		{
			total_length += _putchar(format[index_format]);
			index_format++;
		}
	}
	va_end(arguments);
	return (total_length);
}
