#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>

int _putchar(char c);
int print_str(char *str);
int (*get_print_op(char *s))(char *);
int _printf(const char *format, ...);

/**
 *struct print_t - associer specifier au pointeur de fonction
 *@specifier: fourni par la format string
 *@ptr_to_print_func: renvoi vers la bonne fonction
 */
typedef struct print_t
{
	char *specifier;
	void (*ptr_to_print_func)(va_list args);
} print_t;

#endif
