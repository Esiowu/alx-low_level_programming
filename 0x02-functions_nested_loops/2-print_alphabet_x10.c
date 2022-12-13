#include "main.h"

/**
 * print_alphanet_x10 - prints alpha 10 times
 * Return:0 (Success)
 */

void_print_alphabet_x10(void)
{
int ten;
char la;

for (ten = 0; ten <= 9; ten++)
{
for (la = 'a'; la <= 'z'; la++)
_putchar(la);
_putchar('\n');
}
}
