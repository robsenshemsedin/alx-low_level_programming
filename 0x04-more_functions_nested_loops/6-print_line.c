#include "main.h"

/**
 * print_line - Print straight line on the terminal using underscores.
 * @n: number of underscore to be used.
 *
 * Return: Void.
 */
void print_line(int n)
{
	int r = 0;

	while ((n > 0) && (r < n))
	{
		_putchar('_');
		r++;
	}
	_putchar('\n');
}
