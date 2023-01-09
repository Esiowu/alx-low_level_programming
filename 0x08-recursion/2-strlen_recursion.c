#include "main.h"

/**
 * _strlen_recursion - a fxbn that prints the lenght of a string.
 * @s: An input string
 * Return: lenght of s
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
