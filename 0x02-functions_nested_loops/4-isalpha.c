#include "main.h"

/**
 * _isalpha - Check whether an input is a letter or not.
 * @c: The character to check.
 * Return: 0 if not lower case else 1.
 */
int _isalpha(int c)
{
	int value;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		value = 1;
	else
		value = 0;
	return (value);
}
