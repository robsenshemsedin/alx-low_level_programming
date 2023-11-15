#include "main.h"
/**
* _strlen_recursion - gives length of a string
* @s: input string 
*Return: string length
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
