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
	char variable[4] = "test";
	char variable2 = 'A';
	char variable3 = 65;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("len: %d | len2: %d\n", len, len2);
	_printf("Je fais un %s\n", variable);
	_printf("%c\n", variable2);
	_printf("%c\n", variable3);
	_printf("Je fais un _printf %\n");
	printf("Je fais un printf %\n");
	return (0);
}
