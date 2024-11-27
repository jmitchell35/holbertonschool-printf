#include "main.h"
/* Prints a char, to stdout */

/**
* print_char - prints char to std output
*
* @args: parameter of va_list type
*
* Return: number of bytes printed
*/

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
