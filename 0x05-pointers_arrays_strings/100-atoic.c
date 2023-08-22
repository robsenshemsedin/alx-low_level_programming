#include "main.h"

/**
 * _atoi - Convert a string  to and integer.
 * @s: Pointer to the first char in the input string .
 *
 * Return: The int;
 */
int _atoi(char *s)
{
	int new = 0, i = 0, digit = 0, n = 0, tempdigit = 0, j = 1, sign = 2;

	while (*s != '\0')
	{
		if ((sign == 2) && (*s <= '9' && *s >= '0'))
			sign = *(s - 1) == '-'? 0: 1;
		s++;
		n++;
	}
	while (j <= n)
	{
		if (*(s - j) >= '0' && *(s - j) <= '9')
		{
			new = *(s - j) - '0';
			tempdigit = digit;
			while (tempdigit)
			{
				new *= 10;
				tempdigit--;
			}
			i += new;
			digit++;
		}
		j++;
	}
	i = sign == 0? -i: i;
	return (i);
}
