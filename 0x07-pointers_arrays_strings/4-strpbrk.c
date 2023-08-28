#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: Pointer to the first character of the main string.
 * @accept: Pointer to the first character of the second string.
 *
 * Return: Returns a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		++s;
	}
	return (NULL);
}
