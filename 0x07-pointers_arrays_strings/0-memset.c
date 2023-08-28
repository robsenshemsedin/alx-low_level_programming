#include "main.h"

/**
 * _memset - Sets the first n bytes of the memory with value b.
 * @s: Pointer to the first character of the array.
 * @b: The constant byte to be assigned.
 * @n: Number of bytes to be replaced.
 *
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		--n;
	}
	return (s);
}
