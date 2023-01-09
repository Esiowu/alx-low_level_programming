#include "main.h"

/**
 * _strchr - locates a chr in a string
 * @c: occurrence of the character
 * @s: in the string
 * Return: a pointer to the first occurence of thr char
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else

			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
