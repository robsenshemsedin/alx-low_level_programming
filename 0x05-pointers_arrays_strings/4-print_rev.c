#include "main.h"
#include <stdio.h>
/**
 * print_rev - Printing the input string in reverse order.
 * @s: Pointer to the first character of an input string.
 *
 * Return: Always return void.
 */
void print_rev(char *s)
{
	int n = 0;
	int i = 1;

	while (*s != '\0')
	{
		s += 1;
		n++;
	}
	while (i <= n)
	{
		_putchar(*(s - i));
		i++;
	}
	_putchar('\n');
}
