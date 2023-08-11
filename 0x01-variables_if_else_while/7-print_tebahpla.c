#include <stdio.h>

/**
 * main - Print all lower case letters in descending order.
 *
 * Return: Always return success or 0.
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
