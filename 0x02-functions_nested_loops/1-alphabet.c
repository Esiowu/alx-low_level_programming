#include "main.h"

/**
 * main - prints_alphaebet in lower case.
 * Description: prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0
 */
void print_alphabet(void)
{
char la;
for (la = 'a'; la <= 'z'; la++)
_putchar(la);
_putchar('\n');
}
