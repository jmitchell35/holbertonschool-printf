#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	char string[4] = "test";
	char single_char = "c";
	char single_charchar = 'A';

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("len: %d len2: %d", len, len2);
	_printf('A');
	printf('A');
	_printf("test");
	printf("test");
	_printf("Je veux imprimer ceci : %s", string);
	printf("Je veux imprimer ceci : %s", string);
	_printf("Je veux imprimer ceci : %c", single_char);
	printf("Je veux imprimer ceci : %c", single_char);
	_printf("Je veux imprimer ceci : %c", single_charchar);
	printf("Je veux imprimer ceci : %c", single_charchar);
	len = _printf("");
	len2 = printf("");
	printf("len: %d len2: %d", len, len2);
	len = _printf();
	len2 = printf();
	printf("len: %d len2: %d", len, len2);
}
