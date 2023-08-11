#include <stdio.h>

/**
 * main - print int values using putchar
 *
 * Return: Alwarys return success.
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
	return (0);
}
