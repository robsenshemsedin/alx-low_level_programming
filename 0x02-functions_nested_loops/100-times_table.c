#include "main.h"

/**
 * print_times_table
 * @n: inputNumber.
 *
 * Return: Always return success.
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	
	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			while (j <= n)
			{
				int result = i * j;

				if (j != 0  && result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
				}
				else if (j != 0 && (result >= 10 && result < 100))
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (result - (result % 10)) / 10);
					_putchar('0' + (result % 10));
				}
				else if (j != 0 && (result > 100 && result < 110))
				{
					_putchar(' ');
					_putchar('1');
					_putchar('0');
					_putchar('0' + (result - 100));
				}
				else if (result >= 110)
				{
					_putchar(' ');
					_putchar('1');
					_putchar('0' + (((result - 100) - ((result - 100) % 10)) / 10));
					_putchar('0' + (result % 10));
				}
				else
				{
					_putchar(' ');
					_putchar('1');
					_putchar('0');
					_putchar('0');
				}
				if (j != n)
					_putchar(',');
				j++;
			}
			_putchar('\n');
			j = 0;
			i++;
		}
	}
}
