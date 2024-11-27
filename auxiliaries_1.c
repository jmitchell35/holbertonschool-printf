#include "main.h"

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

	if (format[*format_iter + 1] == '%')
	{
		error_flag = _putchar('%'); /* Handling %% */
		(*format_iter) += 2; /* Skipping both % to next char */
	}
	else if (format[*format_iter + 1])
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
	else
	{
		error_flag = _putchar('%');
		(*format_iter)++;
	}
	return (error_flag < 0 ? -1 : error_flag);
	/* Because error_flag can equal -2, see above */
}

