#include "main.h"

/**
 * _islower - Check whether a number is lower case or upper case.
 * @c: The character to check.
 * Return: 0 if not lower case else 1.
 */
int _islower(int c)
{
	int value;

	if ((c + '0') >= 'a' && (c + '0') <= 'z')
		value = 0;
	else
		value = 1;
	return (value);
}
