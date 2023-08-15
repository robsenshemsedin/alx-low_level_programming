#include <stdio.h>
#include <main.h>

/**
 * print_alphabet - print lower case letters.
 *
 * Return: void return value.
 */
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
