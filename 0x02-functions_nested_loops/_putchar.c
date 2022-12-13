#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to point
 * Return: 0 (succes)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
