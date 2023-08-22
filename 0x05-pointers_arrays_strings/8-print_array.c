#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer to the first element of an input array.
 * @n: number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i = 0;
	int j = 0;

	while (*a != '\0')
	{
		a++;
		i++;
	}
	a -= i;
	while (j < n)
	{
		if ((j + 1) != n)
			printf("%d, ", *(a + j));
		else
			printf("%d", *(a + j));
		j++;
	}
	printf("\n");

}
