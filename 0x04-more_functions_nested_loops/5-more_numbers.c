#include "main.h"

/**
 * more_numbers - Print 0 to 14 ten times.
 *
 * Return: No return value.
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar('0' + ((j - (j % 10)) / 10));
			}
			_putchar('0' + (j % 10));
			j++;
		}
		j = 0;
		i++;
		_putchar('\n');
	}
}
