#include "main.h"

/**
 * wildcmp - compares two strings and returns 1
 * if the strings can be considered identical,
 * else return 0
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards
 * Return: 1 if identical, else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')

	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
