#include "main.h"
/**
 * print_percentage - prints a '%' character to the standard output
 * @arguments: a va_list
 * Return: the number of characters (always 1)
 */
int print_percentage(va_list arguments)
{
	(void)arguments;
	_putchar('%');

	return (1);
}
