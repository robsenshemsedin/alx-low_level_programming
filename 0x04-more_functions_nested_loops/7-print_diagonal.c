#include "main.h"

/**
 * print_diagonal - Print n numbers of diagonal lines on the terminal.
 * @n: number of backslash to be used.
 *
 * Return: Void.
 */
void print_diagonal(int n)
{
	int r = 1;
	int m;

	while ((n > 0) && (r <= n))
	{
		m = r;
		while (--m)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		r++;
	}
}
