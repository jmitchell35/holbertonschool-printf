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

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		if (_putchar(*str) == -1)
		{
			return (-1);
		}
		length++;
		str++;
	}
	return (length);
}
