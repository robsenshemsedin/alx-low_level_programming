#include "main.h"

/**
 * puts_half - pints half of a string, followed by a new line.
 * @str: input string value.
 *
 * Return: Void.
 */
void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	str -= i;
	if ((i % 2) == 0)
	{
		j = i / 2;
		while (j < i)
		{
			_putchar(*(str + j));
			j++;
		}
		_putchar('\n');
	}
	else
	{
		j = ((i - 1) / 2) + 1;
		while (j < i)
		{
			_putchar(*(str + j));
			j++;
		}
		_putchar('\n');
	}
}
