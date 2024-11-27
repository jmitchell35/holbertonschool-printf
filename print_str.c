#include "main.h"
/* Prints a string, to stdout */

/**
* print_str - prints string to std output
*
* @args: va_list type parameter
*
* Return: number of bytes printed
*/

int print_str(va_list args)
{
	int length = 0;
	char *str = va_arg(args, char *);

	while (*str)
	{
		length += _putchar(*str);
		str++;
	}
	return (length);
}
