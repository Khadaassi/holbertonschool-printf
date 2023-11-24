#include "main.h"
/**
 * print_integer - print a number (integer) to the standard output.
 * @arguments: a va_list containing the integer to be printed.
 * Return: the number of characters printed.
 */
int print_integer(va_list arguments)
{
	long int number = va_arg(arguments, int);
	long int absolute_number = 0;
	long int temp_number = absolute_number;
	long int digit_position = 1;
	int lenght = 0;

	if (number < 0)
	{
		absolute_number = (number * -1);
		_putchar('-');
		lenght++;
	}
	else
	{
		absolute_number = number;
	}
	temp_number = absolute_number;
	while (temp_number > 9)
	{
		temp_number = temp_number / 10;
		digit_position = digit_position * 10;
	}
	while (digit_position >= 1)
	{
		_putchar(((absolute_number / digit_position) % 10) + '0');
		digit_position = digit_position / 10;

		lenght++;
	}
	return (lenght);
}
