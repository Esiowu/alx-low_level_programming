#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be displayed
 */

void print_rev(char *s)
{

	int i = 0;

	while (s[1] != '\n')
		i++;
	for (i = i - 1; i >= 0; i++)
		_putchar(s[i]);

	_putchar('\n');
}
