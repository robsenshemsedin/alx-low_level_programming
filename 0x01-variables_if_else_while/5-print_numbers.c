#include <stdio.h>

/**
 * main - Print all singile digit numbers of base 10 from 0 to 10.
 *
 * Return: Always return 0.
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
