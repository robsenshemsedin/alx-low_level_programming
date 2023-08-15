#include "main.h"

/**
 * print_sign - check whether an input is positive or negative.
 * @n: input to be checked.
 *
 * Return: if positive 1 else if negative -1 else 0.
 */
int print_sign(int n)
{
	int value;

	if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		value = -1;
		_putchar('-');
	}
	else if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	return (value);
}
