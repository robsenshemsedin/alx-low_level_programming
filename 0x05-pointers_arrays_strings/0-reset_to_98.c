#include "main.h"

/**
 * reset_to_98 - Change the value at the given address.
 * @n: address to the variable.
 *
 * Return: Always return success.
 */
void reset_to_98(int *n)
{
	int *p;

	p = n;
	*p = 98;
}
