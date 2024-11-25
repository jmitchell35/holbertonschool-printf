#include "main.h"
/**
 *_printf - 
 *@format:
 *Return:
 */
int _printf(const char *format, ...)
{
	int i = 0, size = 0, j = 0;
	print_t print_ops = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};
	va_list args;

	va_start(args, format);
	while (format[i])
	{
	if (format[i] == '%')
	{
		for (j = 0; j < 2; j++)
		{
			if (format[i + 1] == print_ops[j].specifier)
			{
			print_ops[j].ptr_to_print_func(args, void *);
			i++;
			}
		}
	_putchar(format[i]);
	i++;
	}
	else
		_putchar(format[i]);
	i++;
	}
}
