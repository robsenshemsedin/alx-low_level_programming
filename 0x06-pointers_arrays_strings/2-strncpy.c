#include "main.h"

/**
 * _strncpy - Copies string.
 * @dest: Points to the first character of the destination string.
 * @src: Points to the first character of the source stirng.
 * @n: Max number of characters to  be coppied.
 * Return: Pointer to the first character of the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
