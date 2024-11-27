#include "main.h"
/* Prints a string, to stdout */

/**
* print_str - prints string to std output
*
* @str: ptr to string
*
* Return: number of bytes printed
*/

int print_str(va_list args)
{
	int length = 0;
	char *str = va_args(args, char *);

	while (*str)
	{
		length += _putchar(str);
		str++;
	}
	return (length);
}
