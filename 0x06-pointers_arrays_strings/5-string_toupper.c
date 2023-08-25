#include "main.h"

/**
 * string_toupper - Convert all lower case characters of an input string to
 * upper case.
 * @a: Input string.
 *
 * Return: Return pointer to the first character of the string.
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if ((a[i] <= 122) && (a[i] >= 97))
			a[i] = a[i] - 32;
		i++;
	}
	return (a);
}
