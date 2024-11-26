#include "main.h"
/* Returns the length of a string */

/**
* _strlen - swaps values of two integers
*
* @s: string
*
* Return: int (length of string)
*/

int _strlen(char *s)
{
	char *ptr = s;

	while (*ptr)
		ptr++;
	return (ptr - s);
}
