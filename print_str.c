#include "main.h"
/* Prints a string, to stdout */

/**
* print_str - prints string to std output
*
* @str: ptr to string
*
* Return: number of bytes printed
*/

int print_str(char *str)
{
	int length = 0;

	while (*str)
	{
		length += _putchar(str);
		str++;
	}
	return (length);
}
