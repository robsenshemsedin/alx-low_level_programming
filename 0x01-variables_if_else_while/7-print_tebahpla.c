#include <stdio.h>

/**
 * main - Print all lower case letters in descending order
 *
 * Retrun: Always return success
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
