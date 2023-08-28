#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 * @dest: Pointer to the 50th character of the array.
 * @src: Pointer to the first character to the sorce array.
 * @n: number of bytes to be coppied.
 *
 * Return: Pointer to the destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n)
	{
		*(dest + (n - 1)) = src[n - 1];
		--n;
	}
	return (dest);
}
