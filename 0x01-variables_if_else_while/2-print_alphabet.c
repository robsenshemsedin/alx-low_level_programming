#include <stdio.h>

/**
 * main - print lowar case latters from a to z then end with new line.
 *
 * Return: Always return success.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{		
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
