#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_char - prints char to std output
 * @args: parameter of va_list type
 * Return: number of bytes printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
/**
 * print_str - prints string to std output
 * @args: va_list type parameter
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
/**
  * print_percent - prints '%'
  * @args: para;eter of va_list type
  * Return: ! if success, or -1
  */
int print_percent(va_list args __attribute__((unused)))
{
	return (_putchar('%'));
}
