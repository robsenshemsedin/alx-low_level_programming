#include "main.h"

/**
 * print_square - Print square with n size.
 * @n: the size of the square.
 *
 * Return: Void.
 */
void print_square(int n)
{
	int r = 0;
	int m = 0;

	while ((r < n) && (n > 0))
	{
		while (m < n)
		{
			_putchar('#');
			m++;
		}
		m = 0;
		_putchar('\n');
		r++;
	}
	if (n <= 0)
		_putchar('\n');
}
