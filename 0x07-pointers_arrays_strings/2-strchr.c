#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: Pointer to the first character of a string.
 * @c: Character to be searched.
 *
 * Return: If found the character pointer to its first occurrence else NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			break;
		++s;
	}
	if (*s == '\0')
		return (NULL);
	else
		return (s);
}
