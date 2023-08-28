#include <stddef.h>
#include "main.h"

/**
 * _strstr - A function that locates a substring.
 * @haystack: Pointer to the first character of the main string.
 * @needle: Pointer to the first character of the substring.
 *
 * Return: Returns a pointer to the beginning of the
 * located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (needle[i] != *(haystack + i))
				break;
			else if (needle[i + 1] == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
