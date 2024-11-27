#include "main.h"
/**
 *_printf - prints string interpreting included specifiers (variadic args)
 *@format: pointer to format string
 *Return: length of printed string
 */
int _printf(const char *format, ...)
{
	int format_iter = 0, printed_length = 0, error_flag;
	va_list args;

	if (format == NULL) /*NULL handler*/
		return (-1);
	va_start(args, format);/*start variadic iteration*/
	while (format[format_iter])
	{
	if (format[format_iter] == '%')
	{
		error_flag = handle_specifier(format, &format_iter, args);
		/**
		  * Delegate specifier handler to make code lighter
		  * ptr to format_iter to increment index from subroutine
		  * args needed as arg to print func
		  * print func matched from get_op_func through ptr_to_func
		  */
		if (error_flag == -1)
			return (-1);
		/*Error_flag can be -1: write & _putchar return -1 on error*/
		printed_length += error_flag;
		/*if not -1, number of bytes printed by matched print func */
	}
	else
	{
		error_flag = _putchar(format[format_iter]);
		/*Handling normal characters*/
		if (error_flag == -1)
			return (-1);
		printed_length++;
		format_iter++;
	}
	}
	va_end(args);
	return (printed_length);
}

