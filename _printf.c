#include "main.h"
/**
 *_printf - prints string interpreting included specifiers (variadic args)
 *@format: pointer to format string
 *Return: length of printed string
 */
int _printf(const char *format, ...)
{
	int format_iter = 0, length = 0;
	va_list args;
	int (*ptr_to_func(char *));
	char *ptr_to_format = (char *)format;

	va_start(args, format);
	while (ptr_to_format[format_iter])
	{
	if (ptr_to_format[format_iter] == '%' && ptr_to_format[format_iter + 1])
	{
	ptr_to_func = get_print_op(&ptr_to_format[format_iter + 1]);
	if (ptr_to_func != NULL)
	{
		length += ptr_to_func(args, char *);
		format_iter++;
	}
	length += _putchar(ptr_to_format[format_iter]);
	format_iter++;
	}
	else
		length += _putchar(ptr_to_format[format_iter]);
	format_iter++;
	}
	va_end(args);
	return (length);
}
