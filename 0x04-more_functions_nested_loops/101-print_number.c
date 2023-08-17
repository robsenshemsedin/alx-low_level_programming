#include "main.h"
/**
* print_number - A function that prints an integer. With out using long.
* @n: Input to be printed
*
* Return: Void.
*/
void print_number(int n)
{
	unsigned int input = n;

	_putchar(input % 10 + '0');
}
