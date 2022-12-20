#include "main.h"

/**
 * _puts - print a string on the terminal
 * @str: string to the printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
