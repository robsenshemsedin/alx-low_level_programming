#include "main.h"

/**
 * _strcat - Concatenates two input strings.
 * @dest: Pointer to the first string first character.
 * @src: Pointer to the second string first character.
 *
 * Return: Return pointer to the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	char tmp = 'a';
	char *ptr = &tmp;

	ptr = dest;
	while (1)
	{
		if (*dest == '\0')
		{
			while (*src != '\0')
			{
				*dest = *src;
				++dest;
				++src;
			}
			*dest = '\0';
			break;
		}
		++dest;
	}
	return (ptr);
}
