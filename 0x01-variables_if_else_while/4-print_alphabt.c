#include <stdio.h>
/**
 * main - Print all lower case letters except p and e.
 *
 * Return: Always return 0.
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
			putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
