#include <stdio.h>
#define LIMIT  1024
/**
 * main - Write a program that computes and prints the sum of all the
 * multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: Always return success.
 */
int main(void)
{
	int i = 1;
	int sum = 0;

	while (i < LIMIT)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
