#include "main.h"

/**
 * _strncat - Concatenates atmost n elements of the second srcing to
 * the fist stirng. 
 * @dest: Pointer to the first character of the first srcing.
 * @src: Pointer to the first character of the second srcing.
 * @n: Maximum number of characters to be concatenated.
 *
 * Return: Returns pointer to the first character fo the first input srcing.
 */
char *_strncat(char *dest, char *src, int n)
{
	char tmp = 'a';
	char *ptr = &tmp;
	int i = 1;

	ptr = dest;
	while (1)
	{
		if (*dest == '\0')
		{
			while ((*src != '\0') && (i <= n))
			{
				*dest = *src;
				++dest;
				++src;
				++i
			}
			*dest = '\0';
			break;
		}
		++dest;
	}
	return (ptr);
}
