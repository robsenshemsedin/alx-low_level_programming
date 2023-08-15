#include "main.h"

/**
 * print_last_digit - Print the last digit of a input.
 * @input: Input value.
 *
 * Return: return the last digit of an input.
 */
int print_last_digit(int input)
{
	int value;
	
	if (input < 0)
		input -= input;
	value = input % 10;
	_putchar('0' + value);
	return (value);
}
