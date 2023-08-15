#include "main.h"

/**
 * main - print putchar followed by new line.
 *
 * Return: Always return success.
 */
int main(void)
{
	char chars[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i = 0;

	while (i < 9)
	{
		_putchar(chars[i]);
		i++;
	}
	return (0);
}
