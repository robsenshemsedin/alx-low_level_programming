#include "main.h"
/**
* _puts_recursion - show a string followed by a new line 
*@k:a spelling to be printed
*Return:returns void
*/
void _puts_recursion(char *k)
{
	if (*k == '\0')
		_putchar('\n');
	else
	{
		_putchar(k[0]);
		_puts_recursion(k + 1);
	}
}
