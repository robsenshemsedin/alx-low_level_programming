#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print both diagonal sum.
 * @a: input string
 * @size: The size of the array.
 *
 * Return: Void.
 */

void print_diagsums(int *a, int size)
{
	int row, col, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (col == row)
			{
				sum1 += *((a + row * size) + col);
			}
			if ((row + col) == (size - 1))
			{
				sum2 += *((a + row * size) + col);
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
