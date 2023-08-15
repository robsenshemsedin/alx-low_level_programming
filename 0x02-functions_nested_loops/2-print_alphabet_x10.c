#include "main.h"

/**
 * print_alphabet_x10 - print lower case letters 10 times followed by new line
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int num = 1;

	while (num <= 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		c = 'a';
		num++;
	}
}
