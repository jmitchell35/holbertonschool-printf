#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2, i;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("%c\n", '!');
	len2 = printf("%c\n", '!');
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("%s\n", "Hello, world !");
	len2 = printf("%s\n", "Hello, World !");
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("");
	len2 = printf("");
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("%c%c%c%c%c\n", 'H', 'e', 'l', 'l', 'o');
	len2 = printf("%c%c%c%c%c\n", 'H', 'e', 'l', 'l', 'o');
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("%s\n", NULL);
	len2 = printf("%s\n", NULL);
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("%s\n", "");
	len2 = printf("%s\n", "");
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("%y\n", 123);
	len2 = printf("%y\n", 123);
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("%%\n");
	len2 = printf("%%\n");
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("cc\n");
	len2 = printf("cc\n");
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("%c\n");
	len2 = printf("%c\n");
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf(NULL);
	len2 = printf(NULL);
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("Char: %c, String: %s\n", 'A', "Test");
	len2 = printf("Char: %c, String: %s\n", 'A', "Test");
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("Hello %s, your score is %c.\n", "Alice", 'A');
	len2 = printf("Hello %s, your score is %c.\n", "Alice", 'A');
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("%s\n", "A");
	len2 = printf("%s\n", "A");
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("%s\n", "");
	len2 = printf("%s\n", "");
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("%s\n", "Hello\0World");
	len2 = printf("%s\n", "Hello\0World");
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("%s %s %s %s %s %s\n", "A", "B", "C", "D", "E", "F");
	len2 = printf("%s %s %s %s %s %s\n", "A", "B", "C", "D", "E", "F");
	printf("len: %d | len2: %d\n", len, len2);
	for (i = 0; i < 100; i++)
	{
		_printf("Count: %c", 'a');
		if (i == 99)
			_printf("\n");
	}
	for (i = 0; i < 100; i++)
	{
		printf("Count: %c", 'a');
		if (i == 99)
			printf("\n");
	}
	len = _printf("%r\n", 123);
	len2 = printf("%r\n", 123);
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("Unknown:[%r]\n");
	len2 = printf("Unknown:[%r]\n");
	printf("len: %d | len2: %d\n", len, len2);
	len = _printf("%");
	len2 = printf("%");
	printf("len: %d | len2: %d\n", len, len2);

	return (0);
}

