#include "main.h"

/**
  * get_print_op - matches specifier with corresponding printing function
  * @s: ptr to str (char *)
  * Return: ptr_to_func
  */
int (*get_print_op(char *s))(char *)
{
	print_t print_ops = {
		{"c", _putchar},
		{"s", print_str},
		{NULL, NULL}
	};
	int print_ops_iter;

	for (print_ops_iter = 0; print_ops_iter < 2; print_ops_iter++)
		{
			if (*s == print_ops[print_ops_iter].specifier)
			{
			return (print_ops[print_ops_iter].ptr_to_print_func);
			}
		}
	return (NULL);
}
