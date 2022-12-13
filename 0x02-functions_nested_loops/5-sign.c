#include "main.h"

/**
 * print_sign - prints the sign of a mentor
 * @n: the number of the sign to be printed
 * Return: 1 if num is > 0
 * 0 if number is = 0
 * -1 if number is < 0
 */

int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
