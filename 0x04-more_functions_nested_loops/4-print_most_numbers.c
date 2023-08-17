#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 to 0.
 *
 * Return: No return value.
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
