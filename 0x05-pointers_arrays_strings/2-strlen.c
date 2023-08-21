#include "main.h"

/**
 * _strlen - Print the length of an input string.
 * @s: Input string.
 *
 * Return: Return the count of characters in the string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s += 1;
	}
	return (count);
}
