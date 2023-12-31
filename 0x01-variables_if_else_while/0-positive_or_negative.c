#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Check whether a number is positive or negative
 *        Print a different message based on the value of n
 * Return: Always return 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
