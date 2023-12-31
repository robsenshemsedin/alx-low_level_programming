#include "main.h"

/**
 * _strcpy - Write a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: The first address to the array s1.
 * @src: The first address to the input address.
 *
 * Return: Address to the first character of the dest array.
 */
char *_strcpy(char *dest, char *src)
{
	char *tmp;

	tmp = dest;
	if (*src != '\0')
	{
		while (1)
	{
		*dest = *src;
		dest++;
		src++;
		if (*src == '\0')
			break;
	}
	}
	return (tmp);
}
