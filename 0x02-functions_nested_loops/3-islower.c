#include "main.h"

/**
 * _islower - Check whether a number is lower case or upper case.
 * @c: The character to check.
 * Return: 0 if not lower case else 1.
 */
int _islower(int c)
{
	int value;

	if (c >= 'a' && c <= 'z')
		value = 1;
	else
		value = 0;
	return (value);
}
