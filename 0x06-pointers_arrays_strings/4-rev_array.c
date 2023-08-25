#include "main.h"

/**
 * reverse_array - Reverse an array.
 * @a: Pointer to the first element of the array.
 * @n: Total number of elements.
 *
 * Return: Void.
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp = 0, nn = --n;

	while (1)
	{
		if (i >= nn)
			break;
		tmp = a[i];
		a[i] = a[nn];
		a[nn] = tmp;
		--nn;
		i++;
	}
}
