#include "main.h"
/**
  * print_number_rec - recursive function, prints all digits of an int as char
  * @number: int, number to print passed to function
  * Return: number of char printed
  */
int print_number_rec(int number)
{
	int printed_length = 0;

	if (number / 10 > 0)
	{
	printed_length += print_number_rec(number / 10);
	printed_length += _putchar('0' + (number % 10));
	}
	return (printed_length);
}
/**
 * print_int - prints an int as a string
 * @args: parameter of va_list type
 * Return: number of chars printed
 */
int print_int(va_list args)
{
	int number = va_arg(args, int), printed_length = 0;

	if (number < 0)
	{
		printed_length += _putchar('-');
		number = -number;
	}

	printed_length += print_number_rec(number);
	return (printed_length);
}

