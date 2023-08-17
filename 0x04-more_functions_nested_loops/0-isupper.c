#include "main.h"

/**
 * _isupper - Check whether an input is upper case or lower case.
 * @c: input.
 *
 * Return: Always return success.
 */
int _isupper(int c)
{
	int value;

	if (c >= 'A' && c <= 'Z')
		value = 1;
	else
		value = 0;
	return (value);
}
