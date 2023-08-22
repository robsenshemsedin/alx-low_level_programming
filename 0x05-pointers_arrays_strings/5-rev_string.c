#include "main.h"
#include <stdio.h>
/**
 * rev_string - Printing the input string in reverse order.
 * @s: Pointer to the first character of an input string.
 *
 * Return: Always return void.
 */
void rev_string(char *s)
{
	int n = 0;
	int i = 1;
	char tmp[10];

	while (*s != '\0')
	{
		s += 1;
		n++;
	}
	while (i <= n)
	{
		tmp[i - 1] = (*(s - i));
		i++;
	}
	i = 1;
	s -= n;
	while (i <= n)
	{
		*s = tmp[i - 1];
		s++;
		i++;
	}
}
