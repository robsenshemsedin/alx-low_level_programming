#include <stdio.h>

/**
 * main - Write a program that prints all single-digit numbers.
 *
 * Return: Always return a success value(0).
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
