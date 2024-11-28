#include "main.h"

/**
  * get_print_op - matches specifier with corresponding printing function
  * @s: character, specifier passed to function
  * Return: ptr_to_func
  */
int (*get_print_op(char s))(va_list)
{
	print_t print_ops[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
		};
	int print_ops_iter;

	for (print_ops_iter = 0; print_ops[print_ops_iter].specifier;
						print_ops_iter++)
	{
		if (s == *print_ops[print_ops_iter].specifier)
		{
			return (print_ops[print_ops_iter].ptr_to_print_func);
		}
	}
	return (NULL);
}
/**
  * handle_specifier - auxiliary func, handles specifier, shortens code
  * @format: const ptr to format string passed to printf
  * @format_iter: int, index of specifier flag
  * @args: va_list, variadic args passed to printf
  * Return: int, number of bytes printed from matched print func, error is -1
  */
int handle_specifier(const char *format, int *format_iter, va_list args)
{
	int error_flag = 0;
	int (*ptr_to_func)(va_list);

	if (format[*format_iter + 1])
	{
		ptr_to_func = get_print_op(format[*format_iter + 1]);
		/*Checking for spec match through matching function get_p_f*/
		if (ptr_to_func != NULL)
		{
			error_flag = ptr_to_func(args);
			/*Request print from matched print func through ptr*/
			(*format_iter) += 2;
		}
		else /* unmatched specifier */
		{
			error_flag = _putchar('%') +
				_putchar(format[*format_iter + 1]);
			/**
			  * Print % and unmatched specifier
			  * Can equal -2 if both _putchar return -1
			  */
			(*format_iter) += 2; /*Skipping both*/
		}
	}
	else if (*format_iter == 0 && (format[1] == '\0'))
		error_flag = -1;
	else
	{
		error_flag = _putchar('%');
		(*format_iter)++;
	}
	return (error_flag < 0 ? -1 : error_flag);
	/* Because error_flag can equal -2, see above */
}

