#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>

int _putchar(char c);
int print_str(va_list args);
int print_char(va_list args);
int (*get_print_op(char s))(va_list);
int _printf(const char *format, ...);
int _strlen(char *s);

/**
 *struct print_t - associer specifier au pointeur de fonction
 *@specifier: fourni par la format string
 *@ptr_to_print_func: renvoi vers la bonne fonction
 */
typedef struct print_t
{
	char *specifier;
	int (*ptr_to_print_func)(va_list);
} print_t;

#endif
