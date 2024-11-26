#include "main.h"
/**
 *_printf - 
 *@format:
 *Return:
 */
int _printf(const char *format, ...)
{
	int format_iter = 0, length = 0, print_ops_iter = 0;
	print_t print_ops = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};
	va_list args;

	va_start(args, format);
	while (format[format_iter])
	{
	if (format[format_iter] == '%')
	{
		for (print_ops_iter = 0; print_ops_iter < 2; print_ops_iter++)
		{
			if (format[format_iter + 1] == print_ops[print_ops_iter].specifier)
			{
			print_ops[print_ops_iter].ptr_to_print_func(args, void *);
			format_iter++;
			}
		}
	_putchar(format[format_iter]);
	format_iter++;
	length++;
	}
	else
	{
		_putchar(format[format_iter]);
		length++;
	}
	format_iter++;
	}
	va_end(args);
	return (length);
}
