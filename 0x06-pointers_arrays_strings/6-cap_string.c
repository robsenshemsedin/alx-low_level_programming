#include "main.h"

/**
 * cap_string - Convert the first character every word
 * after special characters to upper case.
 * @a: The input string.
 *
 * Return: Pointer to the new string first character.
 */
char *cap_string(char *a)
{
	int i = 0, j = 0;
	char b[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}','+'};

	while (a[i] != '\0')
	{
		if (i == 0)
		{
			if ((a[i] <= 122) && (a[i] >= 97))
				a[i] = a[i] - 32;
		}
		while (b[j] != '\0')
		{
			if ((i > 0) && (a[--i] == b[j]))
			{
				if ((a[i] <= 122) && (a[i] >= 97))
					a[i] = a[i] - 32;
			}
			j++;
		}
		i++;
	}
	return (a);
}
