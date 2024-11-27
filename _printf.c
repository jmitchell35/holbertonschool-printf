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
	int (*ptr_to_func)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[format_iter])
	{
		if (format[format_iter] == '%' && format[format_iter + 1])
		{
			ptr_to_func = get_print_op(format[format_iter + 1]);
			if (ptr_to_func != NULL)
			{
				error_flag = ptr_to_func(args);
				if (error_flag == -1)
					return (-1);

				printed_length += error_flag;
				format_iter++;
			}
			else
			{
				error_flag = _putchar(format[format_iter]);
				if (error_flag == -1)
					return (-1);
			printed_length++;
			if (format[format_iter] == format[format_iter + 1])
				format_iter++;
			}
		}
		else
			printed_length += _putchar(format[format_iter]);
		format_iter++;
	}
	va_end(args);
	return (printed_length);
}

