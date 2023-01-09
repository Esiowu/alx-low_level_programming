#include "main.h"

/**
 * _strpbrk - fxn that searches a string for any of a set of bytes
 * @s: first occurence in the string
 * @accept: matches one of the bytes or @NUL if no such bytes
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
