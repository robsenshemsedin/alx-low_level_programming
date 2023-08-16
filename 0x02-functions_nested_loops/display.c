#include "main.h"

/**
 * display -  Print the result on the screen.
 * @result: Multiplication of numbers.
 *
 * Return: Void.
 */
void display(int result)
{
	if (result < 10)
		_putchar('0' + result);
	else if (result == 100)
	{
		_putchar('1');
		_putchar('0');
		_putchar('0');
	}
	else
	{
		_putchar('0' + (result - (result % 10)) / 10);
		_putchar('0' + (result % 10));
	}
}
