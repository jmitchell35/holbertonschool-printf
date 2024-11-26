#include "main.h"
/**
 *_printf - 
 *@format:
 *Return:
 */
int _printf(const char *format, ...)
{
	int format_iter = 0, length = 0;
	va_list args;
	int (*ptr_to_func(char *));

	va_start(args, format);
	while (format[format_iter])
	{
	if (format[format_iter] == '%' && format[format_iter + 1])
	{
	ptr_to_func = get_print_op(format[format_iter + 1]);
	if (ptr_to_func != NULL)
	{
		length += ptr_to_func(args, char *);
		format_iter++;
	}
	length += _putchar(format[format_iter]);
	format_iter++;
	}
	else
		length += _putchar(format[format_iter]);
	format_iter++;
	}
	va_end(args);
	return (length);
}
