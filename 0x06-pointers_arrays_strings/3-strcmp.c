#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 * @s1: First string.
 * @s2: The second string.
 *
 * Return: Posetive int if s1 > s2 else fi s1 < s2 negative int else 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	return (i - j);
}
