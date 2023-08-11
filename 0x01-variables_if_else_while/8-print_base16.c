#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase.
 *
 * Return: Success (0).
 */
int main(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
