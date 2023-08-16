#include "main.h"

/**
 * times_table - Print the 9 times table, starting with 0.
 *
 * Return: Void.
 */
void times_table(void)
{
	int c = 0;
	int r = 0;
	int v = 0;

	while (c < 10)
	{
		while (r < 10)
		{
			v = r * c;
			if (v < 10)
			{
				if (r != 0)
					_putchar(' ');
				_putchar('0' + v);
			}
			else if ((v % 10) == 0)
			{
				_putchar('0' + (v / 10));
				_putchar('0');
			}
			else
			{
				_putchar('0' + (v - (v % 10)) / 10);
				_putchar('0' + (v % 10));
			}
			if (r != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			r++;
		}
		r = 0;
		_putchar('\n');
		c++;
	}
}
