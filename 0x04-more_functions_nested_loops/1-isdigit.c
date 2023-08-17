#include "main.h"

/**
 * _isdigit - Check whether an input is digit or not.
 * @c: Input.
 *
 * Return: If the input is a digit from 0 - 9 return 1 or 0.
 */
int _isdigit(int c)
{
	int value;

	if (c >= '0' && c  <= '9')
		value = 1;
	else
		value = 0;
	return (value);
}
