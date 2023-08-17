#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 0.
 *
 * Return: Always success.
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
