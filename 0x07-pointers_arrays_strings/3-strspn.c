#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: Pointer to the first character of the main string.
 * @accept: Pointer to the first character of the substring.
 *
 * Return: Number of bytes in the initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byteCount = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				byteCount++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (byteCount);
		}
		s++;
	}
	return (byteCount);
}
