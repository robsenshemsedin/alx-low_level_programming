#include "main.h"

/**
 * _puts - Printing the input stirng.
 * @str: Pointer to the initial character of the input string.
 *
 * Return: Always return void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 1;
	}
	_putchar('\n');
}
