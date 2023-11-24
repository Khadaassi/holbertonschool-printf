#include "main.h"

/**
 * main - entry point of the program
 *
 * Return: always 0 (Success)
 */
int main(void)
{
		int positive_number = 59;
		int negative_number = -59;


		char character = 'A';
		char *string = " I am a Holberton student!";

		_printf("%c\n", character);
		_printf("%s\n", string);
		_printf("%%\n\n");

		_printf("This is the best school\n\n");

		_printf("%d\n", positive_number);
		_printf("%i\n\n", negative_number);

		return (0);
}
