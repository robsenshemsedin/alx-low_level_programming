#include "main.h"

/**
 * _abs - Compute the absolute value of an input.
 * @input: input value.
 *
 * Return: return the absolute value of the input.
 */
int _abs(int input)
{
	int value;

	if (input < 0)
		value = -input;
	else
		value = input;
	return (value);
}
