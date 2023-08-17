#include "main.h"

/**
 * print_triangle - Printing triangle with size n.
 * @size: Size of the tringle.
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int r = 1;
	int n = size;

	while ((r <= n) && (n > 0))
	{
		int h = r;
		int s = n - r;

		while (s--)
			_putchar(' ');
		while (h--)
			_putchar('#');
		r++;
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
