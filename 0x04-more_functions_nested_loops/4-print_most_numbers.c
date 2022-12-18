#include "main.h"

/**
 * print_most_numbers - Printing numbers between 0 to 9
 * except 2 and 4, followed by a new line
 * Return: no return
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		if (ch != 2 && ch != 4)
		{
			_putchar(ch + '0');
		}
	}
	_putchar('\n');
}
